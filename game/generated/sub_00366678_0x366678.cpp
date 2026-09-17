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

// Function: sub_00366678
// Address: 0x366678 - 0x366708
void sub_00366678_0x366678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366678_0x366678");
#endif

    switch (ctx->pc) {
        case 0x3666e0u: goto label_3666e0;
        case 0x3666ecu: goto label_3666ec;
        default: break;
    }

    ctx->pc = 0x366678u;

    // 0x366678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x366678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36667c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x366684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36668c: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x36668cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x366690: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x366690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x366694: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x366694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x366698: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x366698u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x36669c: 0xac22a804  sw          $v0, -0x57FC($at)
    ctx->pc = 0x36669cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944772), GPR_U32(ctx, 2));
    // 0x3666a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3666a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3666a4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x3666a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x3666a8: 0xac20a814  sw          $zero, -0x57EC($at)
    ctx->pc = 0x3666a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944788), GPR_U32(ctx, 0));
    // 0x3666ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3666acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3666b0: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x3666b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x3666b4: 0xac20a810  sw          $zero, -0x57F0($at)
    ctx->pc = 0x3666b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944784), GPR_U32(ctx, 0));
    // 0x3666b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3666b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3666bc: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x3666bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x3666c0: 0xac20a818  sw          $zero, -0x57E8($at)
    ctx->pc = 0x3666c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944792), GPR_U32(ctx, 0));
    // 0x3666c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3666c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3666c8: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x3666c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x3666cc: 0xa420a808  sh          $zero, -0x57F8($at)
    ctx->pc = 0x3666ccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294944776), (uint16_t)GPR_U32(ctx, 0));
    // 0x3666d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3666d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3666d4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x3666d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x3666d8: 0xac20a80c  sw          $zero, -0x57F4($at)
    ctx->pc = 0x3666d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944780), GPR_U32(ctx, 0));
    // 0x3666dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3666dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3666e0:
    // 0x3666e0: 0x26101500  addiu       $s0, $s0, 0x1500
    ctx->pc = 0x3666e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5376));
    // 0x3666e4: 0xc0d980c  jal         func_366030
    ctx->pc = 0x3666E4u;
    SET_GPR_U32(ctx, 31, 0x3666ECu);
    ctx->pc = 0x3666E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3666E4u;
    // 0x3666e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366030u, 0x3666E4u, 0x3666ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3666ECu;
label_3666ec:
    // 0x3666ec: 0x621fffc  bgez        $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3666ECu;
    {
        const bool branch_taken_0x3666ec = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3666F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3666ECu;
        // 0x3666f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3666ec) {
            ctx->pc = 0x3666E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3666e0;
        }
    }
    ctx->pc = 0x3666F4u;
    // 0x3666f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3666f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3666f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3666f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3666fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3666fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366700: 0x3e00008  jr          $ra
    ctx->pc = 0x366700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366700u;
        // 0x366704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366708u;
}
