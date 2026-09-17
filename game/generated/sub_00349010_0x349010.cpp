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

// Function: sub_00349010
// Address: 0x349010 - 0x3490b0
void sub_00349010_0x349010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349010_0x349010");
#endif

    switch (ctx->pc) {
        case 0x349028u: goto label_349028;
        case 0x349080u: goto label_349080;
        case 0x349088u: goto label_349088;
        default: break;
    }

    ctx->pc = 0x349010u;

label_349010:
    // 0x349010: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x349010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x349014: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x349014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x349018: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x349018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x34901c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x34901cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x349020: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x349020u;
    {
        const bool branch_taken_0x349020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x349024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349020u;
        // 0x349024: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349020) {
            ctx->pc = 0x349044u;
            goto label_349044;
        }
    }
    ctx->pc = 0x349028u;
label_349028:
    // 0x349028: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x349028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x34902c: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x34902cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x349030: 0x0  nop
    ctx->pc = 0x349030u;
    // NOP
    // 0x349034: 0x0  nop
    ctx->pc = 0x349034u;
    // NOP
    // 0x349038: 0x0  nop
    ctx->pc = 0x349038u;
    // NOP
    // 0x34903c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34903Cu;
    {
        const bool branch_taken_0x34903c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x349040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34903Cu;
        // 0x349040: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34903c) {
            ctx->pc = 0x349028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349028;
        }
    }
    ctx->pc = 0x349044u;
label_349044:
    // 0x349044: 0x3e00008  jr          $ra
    ctx->pc = 0x349044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349044u;
        // 0x349048: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34904Cu;
    // 0x34904c: 0x0  nop
    ctx->pc = 0x34904cu;
    // NOP
    // 0x349050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x349054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x349054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x349058: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x349058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34905c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34905cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x349060: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x349060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x349064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x349068: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x349068u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x34906c: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x34906cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x349070: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x349070u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x349074: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x349074u;
    {
        const bool branch_taken_0x349074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x349078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349074u;
        // 0x349078: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349074) {
            ctx->pc = 0x349098u;
            goto label_349098;
        }
    }
    ctx->pc = 0x34907Cu;
    // 0x34907c: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x34907cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_349080:
    // 0x349080: 0xc0d2404  jal         func_349010
    ctx->pc = 0x349080u;
    SET_GPR_U32(ctx, 31, 0x349088u);
    ctx->pc = 0x349084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349080u;
    // 0x349084: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349010u;
    goto label_349010;
    ctx->pc = 0x349088u;
label_349088:
    // 0x349088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x349088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34908c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x34908cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x349090: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x349090u;
    {
        const bool branch_taken_0x349090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x349090) {
            ctx->pc = 0x349094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349090u;
            // 0x349094: 0x94850002  lhu         $a1, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349080;
        }
    }
    ctx->pc = 0x349098u;
label_349098:
    // 0x349098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34909c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x34909cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3490a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3490a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3490a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3490a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3490a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3490A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3490ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3490A8u;
        // 0x3490ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3490A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3490B0u;
}
