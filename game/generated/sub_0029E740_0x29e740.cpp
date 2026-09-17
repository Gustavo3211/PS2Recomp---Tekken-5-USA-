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

// Function: sub_0029E740
// Address: 0x29e740 - 0x29e7a8
void sub_0029E740_0x29e740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E740_0x29e740");
#endif

    switch (ctx->pc) {
        case 0x29e770u: goto label_29e770;
        case 0x29e77cu: goto label_29e77c;
        default: break;
    }

    ctx->pc = 0x29e740u;

    // 0x29e740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29e740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29e744: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29e744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29e748: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29e748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e74c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29e74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29e750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29e754: 0x26500024  addiu       $s0, $s2, 0x24
    ctx->pc = 0x29e754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x29e758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29e75c: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x29e75cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29e760: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29e760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29e764: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x29e764u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29e768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e76c: 0x0  nop
    ctx->pc = 0x29e76cu;
    // NOP
label_29e770:
    // 0x29e770: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x29e770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x29e774: 0xc0ac950  jal         func_2B2540
    ctx->pc = 0x29E774u;
    SET_GPR_U32(ctx, 31, 0x29E77Cu);
    ctx->pc = 0x29E778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E774u;
    // 0x29e778: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2540u, 0x29E774u, 0x29E77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E77Cu;
label_29e77c:
    // 0x29e77c: 0x1633fffc  bne         $s1, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x29E77Cu;
    {
        const bool branch_taken_0x29e77c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x29E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E77Cu;
        // 0x29e780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e77c) {
            ctx->pc = 0x29E770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e770;
        }
    }
    ctx->pc = 0x29E784u;
    // 0x29e784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e788: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29e788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e78c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29e790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29e794: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29e794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e798: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29e798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e79c: 0x80a7a20  j           func_29E880
    ctx->pc = 0x29E79Cu;
    ctx->pc = 0x29E7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E79Cu;
    // 0x29e7a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E880u;
    sub_0029E880_0x29e880(rdram, ctx, runtime); return;
    ctx->pc = 0x29E7A4u;
    // 0x29e7a4: 0x0  nop
    ctx->pc = 0x29e7a4u;
    // NOP
    ctx->pc = 0x29e7a8u;
}
