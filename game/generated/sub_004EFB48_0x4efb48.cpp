#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EFB48
// Address: 0x4efb48 - 0x4efcc0
void sub_004EFB48_0x4efb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFB48_0x4efb48");
#endif

    switch (ctx->pc) {
        case 0x4efb64u: goto label_4efb64;
        case 0x4efb80u: goto label_4efb80;
        case 0x4efc38u: goto label_4efc38;
        case 0x4efc48u: goto label_4efc48;
        case 0x4efc58u: goto label_4efc58;
        case 0x4efc68u: goto label_4efc68;
        case 0x4efc78u: goto label_4efc78;
        case 0x4efc88u: goto label_4efc88;
        case 0x4efc98u: goto label_4efc98;
        case 0x4efca8u: goto label_4efca8;
        default: break;
    }

    ctx->pc = 0x4efb48u;

    // 0x4efb48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4efb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4efb4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4efb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4efb50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4efb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4efb54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4efb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4efb58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4efb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4efb5c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4EFB5Cu;
    SET_GPR_U32(ctx, 31, 0x4EFB64u);
    ctx->pc = 0x4EFB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFB5Cu;
    // 0x4efb60: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4EFB5Cu, 0x4EFB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EFB64u;
label_4efb64:
    // 0x4efb64: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4efb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4efb68: 0xac62122c  sw          $v0, 0x122C($v1)
    ctx->pc = 0x4efb68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F122Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F122Cu, _value); } while (0);
    // 0x4efb6c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4efb6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4efb70: 0x442000f  bltzl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4EFB70u;
    {
        const bool branch_taken_0x4efb70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4efb70) {
            ctx->pc = 0x4EFB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EFB70u;
            // 0x4efb74: 0x8e040140  lw          $a0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EFBB0u;
            goto label_4efbb0;
        }
    }
    ctx->pc = 0x4EFB78u;
    // 0x4efb78: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4EFB78u;
    SET_GPR_U32(ctx, 31, 0x4EFB80u);
    ctx->pc = 0x4EFB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFB78u;
    // 0x4efb7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4EFB78u, 0x4EFB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EFB80u;
label_4efb80:
    // 0x4efb80: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4efb80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4efb84: 0x240204bd  addiu       $v0, $zero, 0x4BD
    ctx->pc = 0x4efb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1213));
    // 0x4efb88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4efb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4efb8c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4efb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4efb90: 0xa603002e  sh          $v1, 0x2E($s0)
    ctx->pc = 0x4efb90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x4efb94: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4efb94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4efb98: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4efb98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4efb9c: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4efb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4efba0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4efba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4efba4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4efba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4efba8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4efba8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4efbac: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x4efbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4efbb0:
    // 0x4efbb0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4efbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4efbb4: 0xac441228  sw          $a0, 0x1228($v0)
    ctx->pc = 0x4efbb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F1228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1228u, _value); } while (0);
    // 0x4efbb8: 0x848301b4  lh          $v1, 0x1B4($a0)
    ctx->pc = 0x4efbb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x4efbbc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4EFBBCu;
    {
        const bool branch_taken_0x4efbbc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4EFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFBBCu;
        // 0x4efbc0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efbbc) {
            ctx->pc = 0x4EFBD8u;
            goto label_4efbd8;
        }
    }
    ctx->pc = 0x4EFBC4u;
    // 0x4efbc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4efbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4efbc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4efbc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4efbcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4efbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4efbd0: 0x813caae  j           func_4F2AB8
    ctx->pc = 0x4EFBD0u;
    ctx->pc = 0x4EFBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFBD0u;
    // 0x4efbd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AB8u;
    sub_004F2AB8_0x4f2ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EFBD8u;
label_4efbd8:
    // 0x4efbd8: 0x84820160  lh          $v0, 0x160($a0)
    ctx->pc = 0x4efbd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x4efbdc: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4EFBDCu;
    {
        const bool branch_taken_0x4efbdc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4efbdc) {
            ctx->pc = 0x4EFBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EFBDCu;
            // 0x4efbe0: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EFC00u;
            goto label_4efc00;
        }
    }
    ctx->pc = 0x4EFBE4u;
    // 0x4efbe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4efbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4efbe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4efbe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4efbec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4efbecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4efbf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4efbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4efbf4: 0x813caae  j           func_4F2AB8
    ctx->pc = 0x4EFBF4u;
    ctx->pc = 0x4EFBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFBF4u;
    // 0x4efbf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AB8u;
    sub_004F2AB8_0x4f2ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EFBFCu;
    // 0x4efbfc: 0x0  nop
    ctx->pc = 0x4efbfcu;
    // NOP
label_4efc00:
    // 0x4efc00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4efc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4efc04: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4efc04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4efc08: 0x2c430008  sltiu       $v1, $v0, 0x8
    ctx->pc = 0x4efc08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4efc0c: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x4EFC0Cu;
    {
        const bool branch_taken_0x4efc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4efc0c) {
            ctx->pc = 0x4EFC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EFC0Cu;
            // 0x4efc10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EFCACu;
            goto label_4efcac;
        }
    }
    ctx->pc = 0x4EFC14u;
    // 0x4efc14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4efc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4efc18: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4efc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4efc1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4efc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4efc20: 0x8c63bbd0  lw          $v1, -0x4430($v1)
    ctx->pc = 0x4efc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949840)));
    // 0x4efc24: 0x600008  jr          $v1
    ctx->pc = 0x4EFC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4EFC30u: goto label_4efc30;
            case 0x4EFC40u: goto label_4efc40;
            case 0x4EFC50u: goto label_4efc50;
            case 0x4EFC60u: goto label_4efc60;
            case 0x4EFC70u: goto label_4efc70;
            case 0x4EFC80u: goto label_4efc80;
            case 0x4EFC90u: goto label_4efc90;
            case 0x4EFCA0u: goto label_4efca0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFC24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EFC2Cu;
    // 0x4efc2c: 0x0  nop
    ctx->pc = 0x4efc2cu;
    // NOP
label_4efc30:
    // 0x4efc30: 0xc13bf30  jal         func_4EFCC0
    ctx->pc = 0x4EFC30u;
    SET_GPR_U32(ctx, 31, 0x4EFC38u);
    ctx->pc = 0x4EFC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFC30u;
    // 0x4efc34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EFCC0u, 0x4EFC30u, 0x4EFC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EFC38u;
label_4efc38:
    // 0x4efc38: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4EFC38u;
    {
        const bool branch_taken_0x4efc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC38u;
        // 0x4efc3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efc38) {
            ctx->pc = 0x4EFCACu;
            goto label_4efcac;
        }
    }
    ctx->pc = 0x4EFC40u;
label_4efc40:
    // 0x4efc40: 0xc13bf52  jal         func_4EFD48
    ctx->pc = 0x4EFC40u;
    SET_GPR_U32(ctx, 31, 0x4EFC48u);
    ctx->pc = 0x4EFC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFC40u;
    // 0x4efc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EFD48u, 0x4EFC40u, 0x4EFC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EFC48u;
label_4efc48:
    // 0x4efc48: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4EFC48u;
    {
        const bool branch_taken_0x4efc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC48u;
        // 0x4efc4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efc48) {
            ctx->pc = 0x4EFCACu;
            goto label_4efcac;
        }
    }
    ctx->pc = 0x4EFC50u;
label_4efc50:
    // 0x4efc50: 0xc13bf74  jal         func_4EFDD0
    ctx->pc = 0x4EFC50u;
    SET_GPR_U32(ctx, 31, 0x4EFC58u);
    ctx->pc = 0x4EFC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFC50u;
    // 0x4efc54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EFDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EFDD0u, 0x4EFC50u, 0x4EFC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EFC58u;
label_4efc58:
    // 0x4efc58: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4EFC58u;
    {
        const bool branch_taken_0x4efc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC58u;
        // 0x4efc5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efc58) {
            ctx->pc = 0x4EFCACu;
            goto label_4efcac;
        }
    }
    ctx->pc = 0x4EFC60u;
label_4efc60:
    // 0x4efc60: 0xc13bfba  jal         func_4EFEE8
    ctx->pc = 0x4EFC60u;
    SET_GPR_U32(ctx, 31, 0x4EFC68u);
    ctx->pc = 0x4EFC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFC60u;
    // 0x4efc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EFEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EFEE8u, 0x4EFC60u, 0x4EFC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EFC68u;
label_4efc68:
    // 0x4efc68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4EFC68u;
    {
        const bool branch_taken_0x4efc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC68u;
        // 0x4efc6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efc68) {
            ctx->pc = 0x4EFCACu;
            goto label_4efcac;
        }
    }
    ctx->pc = 0x4EFC70u;
label_4efc70:
    // 0x4efc70: 0xc13bfe4  jal         func_4EFF90
    ctx->pc = 0x4EFC70u;
    SET_GPR_U32(ctx, 31, 0x4EFC78u);
    ctx->pc = 0x4EFC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFC70u;
    // 0x4efc74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EFF90u, 0x4EFC70u, 0x4EFC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EFC78u;
label_4efc78:
    // 0x4efc78: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4EFC78u;
    {
        const bool branch_taken_0x4efc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC78u;
        // 0x4efc7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efc78) {
            ctx->pc = 0x4EFCACu;
            goto label_4efcac;
        }
    }
    ctx->pc = 0x4EFC80u;
label_4efc80:
    // 0x4efc80: 0xc13c096  jal         func_4F0258
    ctx->pc = 0x4EFC80u;
    SET_GPR_U32(ctx, 31, 0x4EFC88u);
    ctx->pc = 0x4EFC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFC80u;
    // 0x4efc84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F0258u, 0x4EFC80u, 0x4EFC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EFC88u;
label_4efc88:
    // 0x4efc88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4EFC88u;
    {
        const bool branch_taken_0x4efc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC88u;
        // 0x4efc8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efc88) {
            ctx->pc = 0x4EFCACu;
            goto label_4efcac;
        }
    }
    ctx->pc = 0x4EFC90u;
label_4efc90:
    // 0x4efc90: 0xc13c16c  jal         func_4F05B0
    ctx->pc = 0x4EFC90u;
    SET_GPR_U32(ctx, 31, 0x4EFC98u);
    ctx->pc = 0x4EFC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFC90u;
    // 0x4efc94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F05B0u, 0x4EFC90u, 0x4EFC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EFC98u;
label_4efc98:
    // 0x4efc98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4EFC98u;
    {
        const bool branch_taken_0x4efc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC98u;
        // 0x4efc9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efc98) {
            ctx->pc = 0x4EFCACu;
            goto label_4efcac;
        }
    }
    ctx->pc = 0x4EFCA0u;
label_4efca0:
    // 0x4efca0: 0xc13c222  jal         func_4F0888
    ctx->pc = 0x4EFCA0u;
    SET_GPR_U32(ctx, 31, 0x4EFCA8u);
    ctx->pc = 0x4EFCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFCA0u;
    // 0x4efca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F0888u, 0x4EFCA0u, 0x4EFCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EFCA8u;
label_4efca8:
    // 0x4efca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4efca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4efcac:
    // 0x4efcac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4efcacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4efcb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4efcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4efcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x4EFCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFCB4u;
        // 0x4efcb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EFCBCu;
    // 0x4efcbc: 0x0  nop
    ctx->pc = 0x4efcbcu;
    // NOP
    ctx->pc = 0x4efcc0u;
}
