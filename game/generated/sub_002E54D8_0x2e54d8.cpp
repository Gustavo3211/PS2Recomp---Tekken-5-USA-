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

// Function: sub_002E54D8
// Address: 0x2e54d8 - 0x2e5528
void sub_002E54D8_0x2e54d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E54D8_0x2e54d8");
#endif

    switch (ctx->pc) {
        case 0x2e5520u: goto label_2e5520;
        default: break;
    }

    ctx->pc = 0x2e54d8u;

    // 0x2e54d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e54d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e54dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e54dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e54e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e54e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e54e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e54e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e54e8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e54ec: 0x26030154  addiu       $v1, $s0, 0x154
    ctx->pc = 0x2e54ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
    // 0x2e54f0: 0x2607015c  addiu       $a3, $s0, 0x15C
    ctx->pc = 0x2e54f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x2e54f4: 0x26080164  addiu       $t0, $s0, 0x164
    ctx->pc = 0x2e54f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x2e54f8: 0x2442ee40  addiu       $v0, $v0, -0x11C0
    ctx->pc = 0x2e54f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
    // 0x2e54fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e54fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e5500: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e5500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5504: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e5504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e5508: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2e5508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2e550c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2e550cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2e5510: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2e5510u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2e5514: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x2e5514u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x2e5518: 0xc0b9572  jal         func_2E55C8
    ctx->pc = 0x2E5518u;
    SET_GPR_U32(ctx, 31, 0x2E5520u);
    ctx->pc = 0x2E551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5518u;
    // 0x2e551c: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E55C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E55C8u, 0x2E5518u, 0x2E5520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5520u;
label_2e5520:
    // 0x2e5520: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5520u;
    {
        const bool branch_taken_0x2e5520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5520u;
        // 0x2e5524: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5520) {
            ctx->pc = 0x2E5540u;
            return;
        }
    }
    ctx->pc = 0x2E5528u;
}
