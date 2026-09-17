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

// Function: sub_002CB758
// Address: 0x2cb758 - 0x2cb7c0
void sub_002CB758_0x2cb758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB758_0x2cb758");
#endif

    switch (ctx->pc) {
        case 0x2cb778u: goto label_2cb778;
        case 0x2cb79cu: goto label_2cb79c;
        default: break;
    }

    ctx->pc = 0x2cb758u;

    // 0x2cb758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cb758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cb75c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb760: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cb760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cb764: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb768: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cb768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cb76c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cb76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2cb770: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CB770u;
    SET_GPR_U32(ctx, 31, 0x2CB778u);
    ctx->pc = 0x2CB774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB770u;
    // 0x2cb774: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CB770u, 0x2CB778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB778u;
label_2cb778:
    // 0x2cb778: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x2cb778u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cb77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb780: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2cb780u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2cb784: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x2cb784u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2cb788: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x2cb788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2cb78c: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x2cb78cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x2cb790: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb794: 0xc0b2d60  jal         func_2CB580
    ctx->pc = 0x2CB794u;
    SET_GPR_U32(ctx, 31, 0x2CB79Cu);
    ctx->pc = 0x2CB798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB794u;
    // 0x2cb798: 0xa2020020  sb          $v0, 0x20($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB580u, 0x2CB794u, 0x2CB79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB79Cu;
label_2cb79c:
    // 0x2cb79c: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x2cb79cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cb7a0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x2cb7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2cb7a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb7a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb7a8: 0x31603  sra         $v0, $v1, 24
    ctx->pc = 0x2cb7a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2cb7ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cb7acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cb7b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cb7b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb7b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cb7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cb7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7B8u;
        // 0x2cb7bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB7C0u;
}
