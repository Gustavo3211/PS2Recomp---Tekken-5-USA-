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

// Function: sub_003138D0
// Address: 0x3138d0 - 0x313990
void sub_003138D0_0x3138d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003138D0_0x3138d0");
#endif

    ctx->pc = 0x3138d0u;

    // 0x3138d0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3138d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3138d4: 0x24428110  addiu       $v0, $v0, -0x7EF0
    ctx->pc = 0x3138d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x3138d8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x3138d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1B814Cu));
    // 0x3138dc: 0x8c470048  lw          $a3, 0x48($v0)
    ctx->pc = 0x3138dcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x1B8158u));
    // 0x3138e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3138e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3138e4: 0x64302b  sltu        $a2, $v1, $a0
    ctx->pc = 0x3138e4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3138e8: 0x66200b  movn        $a0, $v1, $a2
    ctx->pc = 0x3138e8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x3138ec: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3138ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3138f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3138f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3138f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3138f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3138f8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3138f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3138fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3138FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138FCu;
        // 0x313900: 0xac450014  sw          $a1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3138FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313904u;
    // 0x313904: 0x0  nop
    ctx->pc = 0x313904u;
    // NOP
    // 0x313908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x313908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31390c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x31390cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x313910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313914: 0x24428110  addiu       $v0, $v0, -0x7EF0
    ctx->pc = 0x313914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x313918: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x313918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x31391c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313920: 0x90450074  lbu         $a1, 0x74($v0)
    ctx->pc = 0x313920u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x1B8184u));
    // 0x313924: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x313924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x313928: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x313928u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x31392c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31392Cu;
    {
        const bool branch_taken_0x31392c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x313930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31392Cu;
        // 0x313930: 0x24a500ff  addiu       $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31392c) {
            ctx->pc = 0x313938u;
            goto label_313938;
        }
    }
    ctx->pc = 0x313934u;
    // 0x313934: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x313934u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_313938:
    // 0x313938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31393c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x31393cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313940: 0x80c4ff4  j           func_313FD0
    ctx->pc = 0x313940u;
    ctx->pc = 0x313944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313940u;
    // 0x313944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313FD0u, 0x313940u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x313948u;
    // 0x313948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x313948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31394c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x31394cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313954: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x313954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x313958: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x313958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31395c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x31395cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313964: 0x24c68110  addiu       $a2, $a2, -0x7EF0
    ctx->pc = 0x313964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934800));
    // 0x313968: 0x80c4ffe  j           func_313FF8
    ctx->pc = 0x313968u;
    ctx->pc = 0x31396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313968u;
    // 0x31396c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313FF8u, 0x313968u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x313970u;
    // 0x313970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x313970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x313974: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x313974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x313978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31397c: 0x24848110  addiu       $a0, $a0, -0x7EF0
    ctx->pc = 0x31397cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934800));
    // 0x313980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313984: 0x80c5010  j           func_314040
    ctx->pc = 0x313984u;
    ctx->pc = 0x313988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313984u;
    // 0x313988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314040u, 0x313984u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x31398Cu;
    // 0x31398c: 0x0  nop
    ctx->pc = 0x31398cu;
    // NOP
    ctx->pc = 0x313990u;
}
