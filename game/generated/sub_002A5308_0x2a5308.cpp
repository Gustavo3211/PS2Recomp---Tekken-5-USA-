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

// Function: sub_002A5308
// Address: 0x2a5308 - 0x2a5360
void sub_002A5308_0x2a5308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5308_0x2a5308");
#endif

    switch (ctx->pc) {
        case 0x2a531cu: goto label_2a531c;
        default: break;
    }

    ctx->pc = 0x2a5308u;

    // 0x2a5308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a5308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a530c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5310: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a5310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a5314: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x2A5314u;
    SET_GPR_U32(ctx, 31, 0x2A531Cu);
    ctx->pc = 0x2A5318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5314u;
    // 0x2a5318: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x2A5314u, 0x2A531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A531Cu;
label_2a531c:
    // 0x2a531c: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2a531cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a5320: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a5320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a5324: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a5324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a5328: 0x2442e690  addiu       $v0, $v0, -0x1970
    ctx->pc = 0x2a5328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960784));
    // 0x2a532c: 0x2484da80  addiu       $a0, $a0, -0x2580
    ctx->pc = 0x2a532cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957696));
    // 0x2a5330: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2a5330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2a5334: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2a5334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2a5338: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2a5338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x2a533c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a533cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5340: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x2a5340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x2a5344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a5344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5348: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a5348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a534c: 0xa385b85f  sb          $a1, -0x47A1($gp)
    ctx->pc = 0x2a534cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948959), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a5350: 0xa380b85d  sb          $zero, -0x47A3($gp)
    ctx->pc = 0x2a5350u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948957), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5354: 0xa385b85e  sb          $a1, -0x47A2($gp)
    ctx->pc = 0x2a5354u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948958), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a5358: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5358u;
        // 0x2a535c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5360u;
}
