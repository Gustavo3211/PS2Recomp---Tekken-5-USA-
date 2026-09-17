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

// Function: sub_001017A8
// Address: 0x1017a8 - 0x101828
void sub_001017A8_0x1017a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001017A8_0x1017a8");
#endif

    switch (ctx->pc) {
        case 0x1017b8u: goto label_1017b8;
        case 0x1017e0u: goto label_1017e0;
        case 0x1017f0u: goto label_1017f0;
        case 0x10180cu: goto label_10180c;
        default: break;
    }

    ctx->pc = 0x1017a8u;

    // 0x1017a8: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x1017a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x1017ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1017ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1017B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017ACu;
        // 0x1017b0: 0xac44a414  sw          $a0, -0x5BEC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943764), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1017ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1017B4u;
    // 0x1017b4: 0x0  nop
    ctx->pc = 0x1017b4u;
    // NOP
label_1017b8:
    // 0x1017b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1017b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1017bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1017bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1017c0: 0x3c12001e  lui         $s2, 0x1E
    ctx->pc = 0x1017c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)30 << 16));
    // 0x1017c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1017c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1017c8: 0x3652b540  ori         $s2, $s2, 0xB540
    ctx->pc = 0x1017c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)46400);
    // 0x1017cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1017ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1017d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1017d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1017d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1017d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1017d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017dc: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x1017dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1017e0:
    // 0x1017e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1017e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1017e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1017e8: 0xc0405c2  jal         func_101708
    ctx->pc = 0x1017E8u;
    SET_GPR_U32(ctx, 31, 0x1017F0u);
    ctx->pc = 0x1017ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1017E8u;
    // 0x1017ec: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101708u, 0x1017E8u, 0x1017F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017F0u;
label_1017f0:
    // 0x1017f0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1017f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1017f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1017F4u;
    {
        const bool branch_taken_0x1017f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1017F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017F4u;
        // 0x1017f8: 0x2121018  mult        $v0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1017f4) {
            ctx->pc = 0x1017E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1017e0;
        }
    }
    ctx->pc = 0x1017FCu;
    // 0x1017fc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1017fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x101800: 0x34846a80  ori         $a0, $a0, 0x6A80
    ctx->pc = 0x101800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)27264);
    // 0x101804: 0xc04029e  jal         func_100A78
    ctx->pc = 0x101804u;
    SET_GPR_U32(ctx, 31, 0x10180Cu);
    ctx->pc = 0x101808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101804u;
    // 0x101808: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100A78u, 0x101804u, 0x10180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10180Cu;
label_10180c:
    // 0x10180c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10180cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x101810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x101814: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101814u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101818: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x101818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10181c: 0x3e00008  jr          $ra
    ctx->pc = 0x10181Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10181Cu;
        // 0x101820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10181Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101824u;
    // 0x101824: 0x0  nop
    ctx->pc = 0x101824u;
    // NOP
    ctx->pc = 0x101828u;
}
