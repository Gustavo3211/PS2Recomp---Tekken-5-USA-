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

// Function: sub_002503B0
// Address: 0x2503b0 - 0x250418
void sub_002503B0_0x2503b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002503B0_0x2503b0");
#endif

    switch (ctx->pc) {
        case 0x2503c8u: goto label_2503c8;
        case 0x2503e4u: goto label_2503e4;
        default: break;
    }

    ctx->pc = 0x2503b0u;

    // 0x2503b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2503b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2503b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2503b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2503b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2503b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2503bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2503bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2503c0: 0xc0940d6  jal         func_250358
    ctx->pc = 0x2503C0u;
    SET_GPR_U32(ctx, 31, 0x2503C8u);
    ctx->pc = 0x2503C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2503C0u;
    // 0x2503c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250358u, 0x2503C0u, 0x2503C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2503C8u;
label_2503c8:
    // 0x2503c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2503c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2503cc: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2503CCu;
    {
        const bool branch_taken_0x2503cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2503cc) {
            ctx->pc = 0x2503D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2503CCu;
            // 0x2503d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250408u;
            goto label_250408;
        }
    }
    ctx->pc = 0x2503D4u;
    // 0x2503d4: 0x5620000c  bnel        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2503D4u;
    {
        const bool branch_taken_0x2503d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2503d4) {
            ctx->pc = 0x2503D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2503D4u;
            // 0x2503d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250408u;
            goto label_250408;
        }
    }
    ctx->pc = 0x2503DCu;
    // 0x2503dc: 0xc040592  jal         func_101648
    ctx->pc = 0x2503DCu;
    SET_GPR_U32(ctx, 31, 0x2503E4u);
    ctx->pc = 0x2503E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2503DCu;
    // 0x2503e0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101648u, 0x2503DCu, 0x2503E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2503E4u;
label_2503e4:
    // 0x2503e4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2503e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2503e8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2503e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2503ec: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2503ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2503f0: 0x24637de8  addiu       $v1, $v1, 0x7DE8
    ctx->pc = 0x2503f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32232));
    // 0x2503f4: 0x34848800  ori         $a0, $a0, 0x8800
    ctx->pc = 0x2503f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34816);
    // 0x2503f8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2503f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2503fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2503fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x250400: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x250400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x250404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250408:
    // 0x250408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x250408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25040c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25040cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250410: 0x3e00008  jr          $ra
    ctx->pc = 0x250410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250410u;
        // 0x250414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250418u;
}
