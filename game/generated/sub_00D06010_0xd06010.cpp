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

// Function: sub_00D06010
// Address: 0xd06010 - 0xd060d0
void sub_00D06010_0xd06010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00D06010_0xd06010");
#endif

    switch (ctx->pc) {
        case 0xd06020u: goto label_d06020;
        case 0xd06038u: goto label_d06038;
        case 0xd06090u: goto label_d06090;
        default: break;
    }

    ctx->pc = 0xd06010u;

    // 0xd06010: 0x90880000  lbu         $t0, 0x0($a0)
    ctx->pc = 0xd06010u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0xd06014: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0xd06014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0xd06018: 0x1100002b  beqz        $t0, . + 4 + (0x2B << 2)
    ctx->pc = 0xD06018u;
    {
        const bool branch_taken_0xd06018 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0xD0601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD06018u;
        // 0xd0601c: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd06018) {
            ctx->pc = 0xD060C8u;
            goto label_d060c8;
        }
    }
    ctx->pc = 0xD06020u;
label_d06020:
    // 0xd06020: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0xd06020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0xd06024: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0xD06024u;
    {
        const bool branch_taken_0xd06024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0xd06024) {
            ctx->pc = 0xD06028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0xD06024u;
            // 0xd06028: 0x90880000  lbu         $t0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0xD060C0u;
            goto label_d060c0;
        }
    }
    ctx->pc = 0xD0602Cu;
    // 0xd0602c: 0x240b0800  addiu       $t3, $zero, 0x800
    ctx->pc = 0xd0602cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0xd06030: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0xd06030u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0xd06034: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0xd06034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_d06038:
    // 0xd06038: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0xD06038u;
    {
        const bool branch_taken_0xd06038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0xd06038) {
            ctx->pc = 0xD0603Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0xD06038u;
            // 0xd0603c: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0xD06058u;
            goto label_d06058;
        }
    }
    ctx->pc = 0xD06040u;
    // 0xd06040: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0xd06040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0xd06044: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0xd06044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0xd06048: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0xd06048u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0xd0604c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0xD0604Cu;
    {
        const bool branch_taken_0xd0604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0xD06050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD0604Cu;
        // 0xd06050: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd0604c) {
            ctx->pc = 0xD060ACu;
            goto label_d060ac;
        }
    }
    ctx->pc = 0xD06054u;
    // 0xd06054: 0x0  nop
    ctx->pc = 0xd06054u;
    // NOP
label_d06058:
    // 0xd06058: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0xd06058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0xd0605c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0xd0605cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0xd06060: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0xd06060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0xd06064: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0xd06064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0xd06068: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0xd06068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0xd0606c: 0x306607ff  andi        $a2, $v1, 0x7FF
    ctx->pc = 0xd0606cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0xd06070: 0x312c3  sra         $v0, $v1, 11
    ctx->pc = 0xd06070u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
    // 0xd06074: 0x166300a  movz        $a2, $t3, $a2
    ctx->pc = 0xd06074u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 11));
    // 0xd06078: 0xa63823  subu        $a3, $a1, $a2
    ctx->pc = 0xd06078u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0xd0607c: 0x3046001f  andi        $a2, $v0, 0x1F
    ctx->pc = 0xd0607cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0xd06080: 0x146300a  movz        $a2, $t2, $a2
    ctx->pc = 0xd06080u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 10));
    // 0xd06084: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0xD06084u;
    {
        const bool branch_taken_0xd06084 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0xD06088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD06084u;
        // 0xd06088: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd06084) {
            ctx->pc = 0xD060ACu;
            goto label_d060ac;
        }
    }
    ctx->pc = 0xD0608Cu;
    // 0xd0608c: 0x0  nop
    ctx->pc = 0xd0608cu;
    // NOP
label_d06090:
    // 0xd06090: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0xd06090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0xd06094: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0xd06094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0xd06098: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0xd06098u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0xd0609c: 0x126102a  slt         $v0, $t1, $a2
    ctx->pc = 0xd0609cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0xd060a0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0xd060a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0xd060a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0xD060A4u;
    {
        const bool branch_taken_0xd060a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0xD060A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD060A4u;
        // 0xd060a8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd060a4) {
            ctx->pc = 0xD06090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_d06090;
        }
    }
    ctx->pc = 0xD060ACu;
label_d060ac:
    // 0xd060ac: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0xd060acu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0xd060b0: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0xd060b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0xd060b4: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0xD060B4u;
    {
        const bool branch_taken_0xd060b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0xD060B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD060B4u;
        // 0xd060b8: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0xd060b4) {
            ctx->pc = 0xD06038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_d06038;
        }
    }
    ctx->pc = 0xD060BCu;
    // 0xd060bc: 0x90880000  lbu         $t0, 0x0($a0)
    ctx->pc = 0xd060bcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_d060c0:
    // 0xd060c0: 0x1500ffd7  bnez        $t0, . + 4 + (-0x29 << 2)
    ctx->pc = 0xD060C0u;
    {
        const bool branch_taken_0xd060c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0xD060C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD060C0u;
        // 0xd060c4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd060c0) {
            ctx->pc = 0xD06020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_d06020;
        }
    }
    ctx->pc = 0xD060C8u;
label_d060c8:
    // 0xd060c8: 0x3e00008  jr          $ra
    ctx->pc = 0xD060C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0xD060CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD060C8u;
        // 0xd060cc: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0xD060C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0xD060D0u;
}
