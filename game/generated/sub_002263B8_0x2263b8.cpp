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

// Function: sub_002263B8
// Address: 0x2263b8 - 0x226448
void sub_002263B8_0x2263b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002263B8_0x2263b8");
#endif

    switch (ctx->pc) {
        case 0x2263e4u: goto label_2263e4;
        case 0x226418u: goto label_226418;
        case 0x226428u: goto label_226428;
        default: break;
    }

    ctx->pc = 0x2263b8u;

    // 0x2263b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2263b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2263bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2263bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2263c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2263c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2263c4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2263c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2263c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2263c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2263cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2263ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2263d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2263d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2263d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2263d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2263d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2263d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2263dc: 0xc089832  jal         func_2260C8
    ctx->pc = 0x2263DCu;
    SET_GPR_U32(ctx, 31, 0x2263E4u);
    ctx->pc = 0x2263E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2263DCu;
    // 0x2263e0: 0x29040  sll         $s2, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2260C8u, 0x2263DCu, 0x2263E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263E4u;
label_2263e4:
    // 0x2263e4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2263e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2263e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2263e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2263ec: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2263ECu;
    {
        const bool branch_taken_0x2263ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2263F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263ECu;
        // 0x2263f0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2263ec) {
            ctx->pc = 0x226430u;
            goto label_226430;
        }
    }
    ctx->pc = 0x2263F4u;
    // 0x2263f4: 0x1224000f  beq         $s1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2263F4u;
    {
        const bool branch_taken_0x2263f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x2263F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263F4u;
        // 0x2263f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2263f4) {
            ctx->pc = 0x226434u;
            goto label_226434;
        }
    }
    ctx->pc = 0x2263FCu;
    // 0x2263fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2263fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226400: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x226400u;
    {
        const bool branch_taken_0x226400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x226404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226400u;
        // 0x226404: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226400) {
            ctx->pc = 0x22642Cu;
            goto label_22642c;
        }
    }
    ctx->pc = 0x226408u;
    // 0x226408: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x226408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x22640c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22640cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226410: 0xc08973a  jal         func_225CE8
    ctx->pc = 0x226410u;
    SET_GPR_U32(ctx, 31, 0x226418u);
    ctx->pc = 0x226414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226410u;
    // 0x226414: 0x24847368  addiu       $a0, $a0, 0x7368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225CE8u, 0x226410u, 0x226418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226418u;
label_226418:
    // 0x226418: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226418u;
    {
        const bool branch_taken_0x226418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226418u;
        // 0x22641c: 0x2404005a  addiu       $a0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226418) {
            ctx->pc = 0x22642Cu;
            goto label_22642c;
        }
    }
    ctx->pc = 0x226420u;
    // 0x226420: 0xc089622  jal         func_225888
    ctx->pc = 0x226420u;
    SET_GPR_U32(ctx, 31, 0x226428u);
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x226420u, 0x226428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226428u;
label_226428:
    // 0x226428: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x226428u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22642c:
    // 0x22642c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22642cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226430:
    // 0x226430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226434:
    // 0x226434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226438: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x226438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22643c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22643cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x226440: 0x3e00008  jr          $ra
    ctx->pc = 0x226440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226440u;
        // 0x226444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226448u;
}
