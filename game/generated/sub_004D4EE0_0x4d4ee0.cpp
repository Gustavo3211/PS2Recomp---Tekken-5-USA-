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

// Function: sub_004D4EE0
// Address: 0x4d4ee0 - 0x4d5088
void sub_004D4EE0_0x4d4ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D4EE0_0x4d4ee0");
#endif

    switch (ctx->pc) {
        case 0x4d4f0cu: goto label_4d4f0c;
        case 0x4d5050u: goto label_4d5050;
        case 0x4d5060u: goto label_4d5060;
        case 0x4d5070u: goto label_4d5070;
        default: break;
    }

    ctx->pc = 0x4d4ee0u;

    // 0x4d4ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d4ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d4ee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d4ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d4ee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d4ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4eec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d4eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d4ef0: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4d4ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4d4ef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d4ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d4ef8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d4ef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d4efc: 0x442000d  bltzl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4D4EFCu;
    {
        const bool branch_taken_0x4d4efc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d4efc) {
            ctx->pc = 0x4D4F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D4EFCu;
            // 0x4d4f00: 0x8e040140  lw          $a0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D4F34u;
            goto label_4d4f34;
        }
    }
    ctx->pc = 0x4D4F04u;
    // 0x4d4f04: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4D4F04u;
    SET_GPR_U32(ctx, 31, 0x4D4F0Cu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D4F04u, 0x4D4F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4F0Cu;
label_4d4f0c:
    // 0x4d4f0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4d4f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4d4f10: 0x96030162  lhu         $v1, 0x162($s0)
    ctx->pc = 0x4d4f10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4d4f14: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4d4f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d4f18: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x4d4f18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d4f1c: 0xa60301c0  sh          $v1, 0x1C0($s0)
    ctx->pc = 0x4d4f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 448), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d4f20: 0xa60401b6  sh          $a0, 0x1B6($s0)
    ctx->pc = 0x4d4f20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 4));
    // 0x4d4f24: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d4f24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d4f28: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d4f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4d4f2c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d4f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d4f30: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x4d4f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4d4f34:
    // 0x4d4f34: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d4f38: 0xac441074  sw          $a0, 0x1074($v0)
    ctx->pc = 0x4d4f38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F1074u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1074u, _value); } while (0);
    // 0x4d4f3c: 0x848301b4  lh          $v1, 0x1B4($a0)
    ctx->pc = 0x4d4f3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x4d4f40: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D4F40u;
    {
        const bool branch_taken_0x4d4f40 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D4F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4F40u;
        // 0x4d4f44: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4f40) {
            ctx->pc = 0x4D4F60u;
            goto label_4d4f60;
        }
    }
    ctx->pc = 0x4D4F48u;
    // 0x4d4f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d4f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d4f50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d4f54: 0x81355a0  j           func_4D5680
    ctx->pc = 0x4D4F54u;
    ctx->pc = 0x4D4F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4F54u;
    // 0x4d4f58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5680u, 0x4D4F54u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D4F5Cu;
    // 0x4d4f5c: 0x0  nop
    ctx->pc = 0x4d4f5cu;
    // NOP
label_4d4f60:
    // 0x4d4f60: 0x84820160  lh          $v0, 0x160($a0)
    ctx->pc = 0x4d4f60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x4d4f64: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D4F64u;
    {
        const bool branch_taken_0x4d4f64 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4D4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4F64u;
        // 0x4d4f68: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4f64) {
            ctx->pc = 0x4D4F88u;
            goto label_4d4f88;
        }
    }
    ctx->pc = 0x4D4F6Cu;
    // 0x4d4f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d4f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d4f74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d4f78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d4f7c: 0x81355a0  j           func_4D5680
    ctx->pc = 0x4D4F7Cu;
    ctx->pc = 0x4D4F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4F7Cu;
    // 0x4d4f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5680u, 0x4D4F7Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D4F84u;
    // 0x4d4f84: 0x0  nop
    ctx->pc = 0x4d4f84u;
    // NOP
label_4d4f88:
    // 0x4d4f88: 0x86030164  lh          $v1, 0x164($s0)
    ctx->pc = 0x4d4f88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4d4f8c: 0x24a51068  addiu       $a1, $a1, 0x1068
    ctx->pc = 0x4d4f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4200));
    // 0x4d4f90: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4d4f90u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4d4f94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d4f98: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4d4f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4d4f9c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4d4f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4d4fa0: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4d4fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4d4fa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d4fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d4fa8: 0x24e7106c  addiu       $a3, $a3, 0x106C
    ctx->pc = 0x4d4fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4204));
    // 0x4d4fac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d4facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d4fb0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4d4fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d4fb4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d4fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4d4fb8: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d4fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d4fbc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d4fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d4fc0: 0x24c61060  addiu       $a2, $a2, 0x1060
    ctx->pc = 0x4d4fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4192));
    // 0x4d4fc4: 0x86020166  lh          $v0, 0x166($s0)
    ctx->pc = 0x4d4fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4d4fc8: 0x25081070  addiu       $t0, $t0, 0x1070
    ctx->pc = 0x4d4fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4208));
    // 0x4d4fcc: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4d4fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d4fd0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x4d4fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d4fd4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4d4fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4d4fd8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4d4fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1060u));
    // 0x4d4fdc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4d4fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4d4fe0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d4fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d4fe4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4d4fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4d4fe8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d4fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d4fec: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4d4fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4d4ff0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4d4ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4d4ff4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d4ff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4d4ff8: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4d4ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4d4ffc: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x4d4ffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4d5000: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4d5000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4d5004: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5008: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d5008u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4d500c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d500cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d5010: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d5010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d5014: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4d5014u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4d5018: 0x106a000f  beq         $v1, $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x4D5018u;
    {
        const bool branch_taken_0x4d5018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x4D501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5018u;
        // 0x4d501c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5018) {
            ctx->pc = 0x4D5058u;
            goto label_4d5058;
        }
    }
    ctx->pc = 0x4D5020u;
    // 0x4d5020: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D5020u;
    {
        const bool branch_taken_0x4d5020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5020) {
            ctx->pc = 0x4D5024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D5020u;
            // 0x4d5024: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D5038u;
            goto label_4d5038;
        }
    }
    ctx->pc = 0x4D5028u;
    // 0x4d5028: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D5028u;
    {
        const bool branch_taken_0x4d5028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5028) {
            ctx->pc = 0x4D5048u;
            goto label_4d5048;
        }
    }
    ctx->pc = 0x4D5030u;
    // 0x4d5030: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4D5030u;
    {
        const bool branch_taken_0x4d5030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5030u;
        // 0x4d5034: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5030) {
            ctx->pc = 0x4D5074u;
            goto label_4d5074;
        }
    }
    ctx->pc = 0x4D5038u;
label_4d5038:
    // 0x4d5038: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4D5038u;
    {
        const bool branch_taken_0x4d5038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4d5038) {
            ctx->pc = 0x4D5068u;
            goto label_4d5068;
        }
    }
    ctx->pc = 0x4D5040u;
    // 0x4d5040: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4D5040u;
    {
        const bool branch_taken_0x4d5040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5040u;
        // 0x4d5044: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5040) {
            ctx->pc = 0x4D5074u;
            goto label_4d5074;
        }
    }
    ctx->pc = 0x4D5048u;
label_4d5048:
    // 0x4d5048: 0xc135422  jal         func_4D5088
    ctx->pc = 0x4D5048u;
    SET_GPR_U32(ctx, 31, 0x4D5050u);
    ctx->pc = 0x4D504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5048u;
    // 0x4d504c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5088u, 0x4D5048u, 0x4D5050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5050u;
label_4d5050:
    // 0x4d5050: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4D5050u;
    {
        const bool branch_taken_0x4d5050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5050u;
        // 0x4d5054: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5050) {
            ctx->pc = 0x4D5074u;
            goto label_4d5074;
        }
    }
    ctx->pc = 0x4D5058u;
label_4d5058:
    // 0x4d5058: 0xc135428  jal         func_4D50A0
    ctx->pc = 0x4D5058u;
    SET_GPR_U32(ctx, 31, 0x4D5060u);
    ctx->pc = 0x4D505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5058u;
    // 0x4d505c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D50A0u, 0x4D5058u, 0x4D5060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5060u;
label_4d5060:
    // 0x4d5060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4D5060u;
    {
        const bool branch_taken_0x4d5060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5060u;
        // 0x4d5064: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5060) {
            ctx->pc = 0x4D5074u;
            goto label_4d5074;
        }
    }
    ctx->pc = 0x4D5068u;
label_4d5068:
    // 0x4d5068: 0xc135468  jal         func_4D51A0
    ctx->pc = 0x4D5068u;
    SET_GPR_U32(ctx, 31, 0x4D5070u);
    ctx->pc = 0x4D506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5068u;
    // 0x4d506c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D51A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D51A0u, 0x4D5068u, 0x4D5070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5070u;
label_4d5070:
    // 0x4d5070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d5070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d5074:
    // 0x4d5074: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d5074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d5078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d507c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D507Cu;
        // 0x4d5080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D507Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D5084u;
    // 0x4d5084: 0x0  nop
    ctx->pc = 0x4d5084u;
    // NOP
    ctx->pc = 0x4d5088u;
}
