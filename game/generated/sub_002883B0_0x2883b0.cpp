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

// Function: sub_002883B0
// Address: 0x2883b0 - 0x288430
void sub_002883B0_0x2883b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002883B0_0x2883b0");
#endif

    switch (ctx->pc) {
        case 0x2883d4u: goto label_2883d4;
        case 0x2883ecu: goto label_2883ec;
        case 0x2883f4u: goto label_2883f4;
        case 0x2883fcu: goto label_2883fc;
        case 0x28841cu: goto label_28841c;
        default: break;
    }

    ctx->pc = 0x2883b0u;

    // 0x2883b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2883b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2883b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2883b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2883b8: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x2883b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x2883bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2883bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2883c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2883c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883c4: 0x2622db38  addiu       $v0, $s1, -0x24C8
    ctx->pc = 0x2883c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957880));
    // 0x2883c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2883c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2883cc: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x2883CCu;
    SET_GPR_U32(ctx, 31, 0x2883D4u);
    ctx->pc = 0x2883D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2883CCu;
    // 0x2883d0: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x2883CCu, 0x2883D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883D4u;
label_2883d4:
    // 0x2883d4: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2883d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2883d8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2883d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2883dc: 0x2442dd58  addiu       $v0, $v0, -0x22A8
    ctx->pc = 0x2883dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x2883e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2883e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883e4: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x2883E4u;
    SET_GPR_U32(ctx, 31, 0x2883ECu);
    ctx->pc = 0x2883E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2883E4u;
    // 0x2883e8: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x2883E4u, 0x2883ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883ECu;
label_2883ec:
    // 0x2883ec: 0xc0a17dc  jal         func_285F70
    ctx->pc = 0x2883ECu;
    SET_GPR_U32(ctx, 31, 0x2883F4u);
    ctx->pc = 0x2883F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2883ECu;
    // 0x2883f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F70u, 0x2883ECu, 0x2883F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883F4u;
label_2883f4:
    // 0x2883f4: 0xc0a2124  jal         func_288490
    ctx->pc = 0x2883F4u;
    SET_GPR_U32(ctx, 31, 0x2883FCu);
    ctx->pc = 0x2883F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2883F4u;
    // 0x2883f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288490u, 0x2883F4u, 0x2883FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883FCu;
label_2883fc:
    // 0x2883fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2883FCu;
    {
        const bool branch_taken_0x2883fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2883FCu;
        // 0x288400: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2883fc) {
            ctx->pc = 0x288420u;
            goto label_288420;
        }
    }
    ctx->pc = 0x288404u;
    // 0x288404: 0x0  nop
    ctx->pc = 0x288404u;
    // NOP
    // 0x288408: 0x2622db38  addiu       $v0, $s1, -0x24C8
    ctx->pc = 0x288408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957880));
    // 0x28840c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x28840cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x288410: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x288410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x288414: 0xc048b90  jal         func_122E40
    ctx->pc = 0x288414u;
    SET_GPR_U32(ctx, 31, 0x28841Cu);
    ctx->pc = 0x288418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288414u;
    // 0x288418: 0x2484fce0  addiu       $a0, $a0, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x288414u, 0x28841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28841Cu;
label_28841c:
    // 0x28841c: 0x0  nop
    ctx->pc = 0x28841cu;
    // NOP
label_288420:
    // 0x288420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x288420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288424: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x288424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288428: 0x3e00008  jr          $ra
    ctx->pc = 0x288428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288428u;
        // 0x28842c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288430u;
}
