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

// Function: sub_00124258
// Address: 0x124258 - 0x1242e8
void sub_00124258_0x124258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124258_0x124258");
#endif

    switch (ctx->pc) {
        case 0x124270u: goto label_124270;
        default: break;
    }

    ctx->pc = 0x124258u;

    // 0x124258: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x124258u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12425c: 0x8ccb0000  lw          $t3, 0x0($a2)
    ctx->pc = 0x12425cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x124260: 0x1140001d  beqz        $t2, . + 4 + (0x1D << 2)
    ctx->pc = 0x124260u;
    {
        const bool branch_taken_0x124260 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x124264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124260u;
        // 0x124264: 0x8cec0000  lw          $t4, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124260) {
            ctx->pc = 0x1242D8u;
            goto label_1242d8;
        }
    }
    ctx->pc = 0x124268u;
    // 0x124268: 0x24ae0004  addiu       $t6, $a1, 0x4
    ctx->pc = 0x124268u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12426c: 0x0  nop
    ctx->pc = 0x12426cu;
    // NOP
label_124270:
    // 0x124270: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x124270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x124274: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x124274u;
    {
        const bool branch_taken_0x124274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124274) {
            ctx->pc = 0x124278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124274u;
            // 0x124278: 0x8a1021  addu        $v0, $a0, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1242C8u;
            goto label_1242c8;
        }
    }
    ctx->pc = 0x12427Cu;
    // 0x12427c: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x12427cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x124280: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x124280u;
    {
        const bool branch_taken_0x124280 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x124284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124280u;
        // 0x124284: 0x10b682b  sltu        $t5, $t0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124280) {
            ctx->pc = 0x1242C4u;
            goto label_1242c4;
        }
    }
    ctx->pc = 0x124288u;
    // 0x124288: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x124288u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12428c: 0x51200009  beql        $t1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12428Cu;
    {
        const bool branch_taken_0x12428c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x12428c) {
            ctx->pc = 0x124290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12428Cu;
            // 0x124290: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1242B4u;
            goto label_1242b4;
        }
    }
    ctx->pc = 0x124294u;
    // 0x124294: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x124294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x124298: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x124298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12429c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1242a0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x1242a0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x1242a4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1242a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1242a8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1242a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1242ac: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x1242acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1242b0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1242b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1242b4:
    // 0x1242b4: 0x10d580b  movn        $t3, $t0, $t5
    ctx->pc = 0x1242b4u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 8));
    // 0x1242b8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1242b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1242bc: 0x183102b  sltu        $v0, $t4, $v1
    ctx->pc = 0x1242bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1242c0: 0x62600b  movn        $t4, $v1, $v0
    ctx->pc = 0x1242c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 3));
label_1242c4:
    // 0x1242c4: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x1242c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1242c8:
    // 0x1242c8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1242c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1242cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1242ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1242d0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1242D0u;
    {
        const bool branch_taken_0x1242d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1242D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242D0u;
        // 0x1242d4: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242d0) {
            ctx->pc = 0x124270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124270;
        }
    }
    ctx->pc = 0x1242D8u;
label_1242d8:
    // 0x1242d8: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x1242d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x1242dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1242DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1242E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242DCu;
        // 0x1242e0: 0xacec0000  sw          $t4, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1242DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1242E4u;
    // 0x1242e4: 0x0  nop
    ctx->pc = 0x1242e4u;
    // NOP
    ctx->pc = 0x1242e8u;
}
