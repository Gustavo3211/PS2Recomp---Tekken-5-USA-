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

// Function: sub_002DF968
// Address: 0x2df968 - 0x2dfa00
void sub_002DF968_0x2df968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF968_0x2df968");
#endif

    switch (ctx->pc) {
        case 0x2df9e0u: goto label_2df9e0;
        default: break;
    }

    ctx->pc = 0x2df968u;

    // 0x2df968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df96c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2df96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df970: 0x2490006c  addiu       $s0, $a0, 0x6C
    ctx->pc = 0x2df970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
    // 0x2df974: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2df974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2df978: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2df978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2df97c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2df97cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df980: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF980u;
    {
        const bool branch_taken_0x2df980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF980u;
        // 0x2df984: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df980) {
            ctx->pc = 0x2DF99Cu;
            goto label_2df99c;
        }
    }
    ctx->pc = 0x2DF988u;
    // 0x2df988: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2df988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2df98c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2df98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df990: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2df990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2df994: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF994u;
    {
        const bool branch_taken_0x2df994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2df994) {
            ctx->pc = 0x2DF9A8u;
            goto label_2df9a8;
        }
    }
    ctx->pc = 0x2DF99Cu;
label_2df99c:
    // 0x2df99c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2df99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2df9a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df9a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2df9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2df9a8:
    // 0x2df9a8: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2DF9A8u;
    {
        const bool branch_taken_0x2df9a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df9a8) {
            ctx->pc = 0x2DF9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF9A8u;
            // 0x2df9ac: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF9E4u;
            goto label_2df9e4;
        }
    }
    ctx->pc = 0x2DF9B0u;
    // 0x2df9b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2df9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2df9b4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF9B4u;
    {
        const bool branch_taken_0x2df9b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df9b4) {
            ctx->pc = 0x2DF9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF9B4u;
            // 0x2df9b8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF9D0u;
            goto label_2df9d0;
        }
    }
    ctx->pc = 0x2DF9BCu;
    // 0x2df9bc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2df9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2df9c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2df9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2df9c4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF9C4u;
    {
        const bool branch_taken_0x2df9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2df9c4) {
            ctx->pc = 0x2DF9D8u;
            goto label_2df9d8;
        }
    }
    ctx->pc = 0x2DF9CCu;
    // 0x2df9cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2df9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2df9d0:
    // 0x2df9d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df9d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2df9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2df9d8:
    // 0x2df9d8: 0xc0b7aaa  jal         func_2DEAA8
    ctx->pc = 0x2DF9D8u;
    SET_GPR_U32(ctx, 31, 0x2DF9E0u);
    ctx->pc = 0x2DEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAA8u, 0x2DF9D8u, 0x2DF9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF9E0u;
label_2df9e0:
    // 0x2df9e0: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2df9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_2df9e4:
    // 0x2df9e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2df9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df9e8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2df9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2df9ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2df9ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2df9f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2df9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2df9f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2df9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF9F8u;
        // 0x2df9fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFA00u;
}
