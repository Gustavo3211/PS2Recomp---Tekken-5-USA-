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

// Function: sub_00235400
// Address: 0x235400 - 0x235458
void sub_00235400_0x235400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235400_0x235400");
#endif

    switch (ctx->pc) {
        case 0x23541cu: goto label_23541c;
        default: break;
    }

    ctx->pc = 0x235400u;

    // 0x235400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x235404: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235408: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x235408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23540c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235410: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235414: 0xc08cbf6  jal         func_232FD8
    ctx->pc = 0x235414u;
    SET_GPR_U32(ctx, 31, 0x23541Cu);
    ctx->pc = 0x235418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235414u;
    // 0x235418: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FD8u, 0x235414u, 0x23541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23541Cu;
label_23541c:
    // 0x23541c: 0x2624fffc  addiu       $a0, $s1, -0x4
    ctx->pc = 0x23541cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x235420: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x235420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x235424: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x235424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x235428: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x235428u;
    {
        const bool branch_taken_0x235428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235428u;
        // 0x23542c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235428) {
            ctx->pc = 0x235460u;
            return;
        }
    }
    ctx->pc = 0x235430u;
    // 0x235430: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x235430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x235434: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x235434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x235438: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x235438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23543c: 0x8c637ac0  lw          $v1, 0x7AC0($v1)
    ctx->pc = 0x23543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31424)));
    // 0x235440: 0x600008  jr          $v1
    ctx->pc = 0x235440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x235448u: goto label_235448;
            case 0x235450u: goto label_235450;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235440u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x235448u;
label_235448:
    // 0x235448: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x235448u;
    {
        const bool branch_taken_0x235448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235448u;
        // 0x23544c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235448) {
            ctx->pc = 0x23545Cu;
            return;
        }
    }
    ctx->pc = 0x235450u;
label_235450:
    // 0x235450: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x235450u;
    {
        const bool branch_taken_0x235450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235450u;
        // 0x235454: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235450) {
            ctx->pc = 0x23545Cu;
            return;
        }
    }
    ctx->pc = 0x235458u;
}
