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

// Function: sub_004E9AF8
// Address: 0x4e9af8 - 0x4e9bf0
void sub_004E9AF8_0x4e9af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9AF8_0x4e9af8");
#endif

    switch (ctx->pc) {
        case 0x4e9b14u: goto label_4e9b14;
        case 0x4e9b30u: goto label_4e9b30;
        case 0x4e9bc8u: goto label_4e9bc8;
        case 0x4e9bd8u: goto label_4e9bd8;
        default: break;
    }

    ctx->pc = 0x4e9af8u;

    // 0x4e9af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e9af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e9afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e9afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e9b00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e9b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9b04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e9b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e9b08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e9b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e9b0c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4E9B0Cu;
    SET_GPR_U32(ctx, 31, 0x4E9B14u);
    ctx->pc = 0x4E9B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9B0Cu;
    // 0x4e9b10: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E9B0Cu, 0x4E9B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9B14u;
label_4e9b14:
    // 0x4e9b14: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e9b18: 0xac62120c  sw          $v0, 0x120C($v1)
    ctx->pc = 0x4e9b18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F120Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F120Cu, _value); } while (0);
    // 0x4e9b1c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e9b1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e9b20: 0x442000b  bltzl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4E9B20u;
    {
        const bool branch_taken_0x4e9b20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4e9b20) {
            ctx->pc = 0x4E9B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9B20u;
            // 0x4e9b24: 0x8e040140  lw          $a0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9B50u;
            goto label_4e9b50;
        }
    }
    ctx->pc = 0x4E9B28u;
    // 0x4e9b28: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E9B28u;
    SET_GPR_U32(ctx, 31, 0x4E9B30u);
    ctx->pc = 0x4E9B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9B28u;
    // 0x4e9b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E9B28u, 0x4E9B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9B30u;
label_4e9b30:
    // 0x4e9b30: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4e9b30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e9b34: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4e9b34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e9b38: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4e9b38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e9b3c: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4e9b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e9b40: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e9b40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e9b44: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e9b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e9b48: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4e9b48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e9b4c: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x4e9b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4e9b50:
    // 0x4e9b50: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e9b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e9b54: 0xac441208  sw          $a0, 0x1208($v0)
    ctx->pc = 0x4e9b54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F1208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1208u, _value); } while (0);
    // 0x4e9b58: 0x848301b4  lh          $v1, 0x1B4($a0)
    ctx->pc = 0x4e9b58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x4e9b5c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E9B5Cu;
    {
        const bool branch_taken_0x4e9b5c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4E9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9B5Cu;
        // 0x4e9b60: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9b5c) {
            ctx->pc = 0x4E9B78u;
            goto label_4e9b78;
        }
    }
    ctx->pc = 0x4E9B64u;
    // 0x4e9b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e9b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9b68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e9b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e9b6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e9b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e9b70: 0x813bcb2  j           func_4EF2C8
    ctx->pc = 0x4E9B70u;
    ctx->pc = 0x4E9B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9B70u;
    // 0x4e9b74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4E9B78u;
label_4e9b78:
    // 0x4e9b78: 0x84820160  lh          $v0, 0x160($a0)
    ctx->pc = 0x4e9b78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x4e9b7c: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E9B7Cu;
    {
        const bool branch_taken_0x4e9b7c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4e9b7c) {
            ctx->pc = 0x4E9B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9B7Cu;
            // 0x4e9b80: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9BA0u;
            goto label_4e9ba0;
        }
    }
    ctx->pc = 0x4E9B84u;
    // 0x4e9b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e9b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e9b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e9b8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e9b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e9b90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e9b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e9b94: 0x813bcb2  j           func_4EF2C8
    ctx->pc = 0x4E9B94u;
    ctx->pc = 0x4E9B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9B94u;
    // 0x4e9b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4E9B9Cu;
    // 0x4e9b9c: 0x0  nop
    ctx->pc = 0x4e9b9cu;
    // NOP
label_4e9ba0:
    // 0x4e9ba0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e9ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e9ba4: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4e9ba4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e9ba8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E9BA8u;
    {
        const bool branch_taken_0x4e9ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9BA8u;
        // 0x4e9bac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9ba8) {
            ctx->pc = 0x4E9BC0u;
            goto label_4e9bc0;
        }
    }
    ctx->pc = 0x4E9BB0u;
    // 0x4e9bb0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4E9BB0u;
    {
        const bool branch_taken_0x4e9bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e9bb0) {
            ctx->pc = 0x4E9BD0u;
            goto label_4e9bd0;
        }
    }
    ctx->pc = 0x4E9BB8u;
    // 0x4e9bb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4E9BB8u;
    {
        const bool branch_taken_0x4e9bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9BB8u;
        // 0x4e9bbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9bb8) {
            ctx->pc = 0x4E9BDCu;
            goto label_4e9bdc;
        }
    }
    ctx->pc = 0x4E9BC0u;
label_4e9bc0:
    // 0x4e9bc0: 0xc13a6fc  jal         func_4E9BF0
    ctx->pc = 0x4E9BC0u;
    SET_GPR_U32(ctx, 31, 0x4E9BC8u);
    ctx->pc = 0x4E9BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9BC0u;
    // 0x4e9bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9BF0u, 0x4E9BC0u, 0x4E9BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9BC8u;
label_4e9bc8:
    // 0x4e9bc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4E9BC8u;
    {
        const bool branch_taken_0x4e9bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9BC8u;
        // 0x4e9bcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9bc8) {
            ctx->pc = 0x4E9BDCu;
            goto label_4e9bdc;
        }
    }
    ctx->pc = 0x4E9BD0u;
label_4e9bd0:
    // 0x4e9bd0: 0xc13a720  jal         func_4E9C80
    ctx->pc = 0x4E9BD0u;
    SET_GPR_U32(ctx, 31, 0x4E9BD8u);
    ctx->pc = 0x4E9BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9BD0u;
    // 0x4e9bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9C80u, 0x4E9BD0u, 0x4E9BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9BD8u;
label_4e9bd8:
    // 0x4e9bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e9bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9bdc:
    // 0x4e9bdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e9bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e9be0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e9be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e9be4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E9BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9BE4u;
        // 0x4e9be8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9BECu;
    // 0x4e9bec: 0x0  nop
    ctx->pc = 0x4e9becu;
    // NOP
    ctx->pc = 0x4e9bf0u;
}
