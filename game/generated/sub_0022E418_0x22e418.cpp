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

// Function: sub_0022E418
// Address: 0x22e418 - 0x22e4b8
void sub_0022E418_0x22e418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E418_0x22e418");
#endif

    switch (ctx->pc) {
        case 0x22e490u: goto label_22e490;
        default: break;
    }

    ctx->pc = 0x22e418u;

    // 0x22e418: 0x8f84a534  lw          $a0, -0x5ACC($gp)
    ctx->pc = 0x22e418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944052)));
    // 0x22e41c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22e420: 0x8c45885c  lw          $a1, -0x77A4($v0)
    ctx->pc = 0x22e420u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x22e424: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22e428: 0x2403fff1  addiu       $v1, $zero, -0xF
    ctx->pc = 0x22e428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x22e42c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22e42cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22e430: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x22e430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22e434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22e438: 0xaf84a534  sw          $a0, -0x5ACC($gp)
    ctx->pc = 0x22e438u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944052), GPR_U32(ctx, 4));
    // 0x22e43c: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x22E43Cu;
    {
        const bool branch_taken_0x22e43c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E43Cu;
        // 0x22e440: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e43c) {
            ctx->pc = 0x22E49Cu;
            goto label_22e49c;
        }
    }
    ctx->pc = 0x22E444u;
    // 0x22e444: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x22e444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x22e448: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22E448u;
    {
        const bool branch_taken_0x22e448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E448u;
        // 0x22e44c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e448) {
            ctx->pc = 0x22E468u;
            goto label_22e468;
        }
    }
    ctx->pc = 0x22E450u;
    // 0x22e450: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22e454: 0x50a20011  beql        $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22E454u;
    {
        const bool branch_taken_0x22e454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x22e454) {
            ctx->pc = 0x22E458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E454u;
            // 0x22e458: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E49Cu;
            goto label_22e49c;
        }
    }
    ctx->pc = 0x22E45Cu;
    // 0x22e45c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22E45Cu;
    {
        const bool branch_taken_0x22e45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E45Cu;
        // 0x22e460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e45c) {
            ctx->pc = 0x22E49Cu;
            goto label_22e49c;
        }
    }
    ctx->pc = 0x22E464u;
    // 0x22e464: 0x0  nop
    ctx->pc = 0x22e464u;
    // NOP
label_22e468:
    // 0x22e468: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E468u;
    {
        const bool branch_taken_0x22e468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E468u;
        // 0x22e46c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e468) {
            ctx->pc = 0x22E480u;
            goto label_22e480;
        }
    }
    ctx->pc = 0x22E470u;
    // 0x22e470: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E470u;
    {
        const bool branch_taken_0x22e470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E470u;
        // 0x22e474: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e470) {
            ctx->pc = 0x22E488u;
            goto label_22e488;
        }
    }
    ctx->pc = 0x22E478u;
    // 0x22e478: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22E478u;
    {
        const bool branch_taken_0x22e478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e478) {
            ctx->pc = 0x22E49Cu;
            goto label_22e49c;
        }
    }
    ctx->pc = 0x22E480u;
label_22e480:
    // 0x22e480: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22E480u;
    {
        const bool branch_taken_0x22e480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E480u;
        // 0x22e484: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e480) {
            ctx->pc = 0x22E49Cu;
            goto label_22e49c;
        }
    }
    ctx->pc = 0x22E488u;
label_22e488:
    // 0x22e488: 0xc08eaf4  jal         func_23ABD0
    ctx->pc = 0x22E488u;
    SET_GPR_U32(ctx, 31, 0x22E490u);
    ctx->pc = 0x23ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABD0u, 0x22E488u, 0x22E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E490u;
label_22e490:
    // 0x22e490: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22e490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22e494: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x22e494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22e498: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x22e498u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_22e49c:
    // 0x22e49c: 0x8f82a534  lw          $v0, -0x5ACC($gp)
    ctx->pc = 0x22e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944052)));
    // 0x22e4a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e4a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x22e4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22e4a8: 0xaf82a534  sw          $v0, -0x5ACC($gp)
    ctx->pc = 0x22e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944052), GPR_U32(ctx, 2));
    // 0x22e4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x22E4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E4ACu;
        // 0x22e4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E4B4u;
    // 0x22e4b4: 0x0  nop
    ctx->pc = 0x22e4b4u;
    // NOP
    ctx->pc = 0x22e4b8u;
}
