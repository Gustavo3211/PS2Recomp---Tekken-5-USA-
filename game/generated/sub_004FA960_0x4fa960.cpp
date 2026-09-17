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

// Function: sub_004FA960
// Address: 0x4fa960 - 0x4faa18
void sub_004FA960_0x4fa960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FA960_0x4fa960");
#endif

    switch (ctx->pc) {
        case 0x4fa988u: goto label_4fa988;
        case 0x4fa990u: goto label_4fa990;
        case 0x4fa9a4u: goto label_4fa9a4;
        case 0x4fa9d4u: goto label_4fa9d4;
        case 0x4fa9e8u: goto label_4fa9e8;
        case 0x4fa9f4u: goto label_4fa9f4;
        default: break;
    }

    ctx->pc = 0x4fa960u;

    // 0x4fa960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4fa960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4fa964: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fa964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fa968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4fa968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4fa96c: 0x2450ceb4  addiu       $s0, $v0, -0x314C
    ctx->pc = 0x4fa96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954676));
    // 0x4fa970: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4fa970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4fa974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fa974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa978: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4fa978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa97c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4fa97cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa980: 0xc042d42  jal         func_10B508
    ctx->pc = 0x4FA980u;
    SET_GPR_U32(ctx, 31, 0x4FA988u);
    ctx->pc = 0x4FA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA980u;
    // 0x4fa984: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B508u, 0x4FA980u, 0x4FA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA988u;
label_4fa988:
    // 0x4fa988: 0xc042d0e  jal         func_10B438
    ctx->pc = 0x4FA988u;
    SET_GPR_U32(ctx, 31, 0x4FA990u);
    ctx->pc = 0x4FA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA988u;
    // 0x4fa98c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B438u, 0x4FA988u, 0x4FA990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA990u;
label_4fa990:
    // 0x4fa990: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x4fa990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x4fa994: 0x8c840230  lw          $a0, 0x230($a0)
    ctx->pc = 0x4fa994u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000230u)); // MMIO: 0x70000230
    // 0x4fa998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fa998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa99c: 0xc0407d4  jal         func_101F50
    ctx->pc = 0x4FA99Cu;
    SET_GPR_U32(ctx, 31, 0x4FA9A4u);
    ctx->pc = 0x4FA9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA99Cu;
    // 0x4fa9a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101F50u, 0x4FA99Cu, 0x4FA9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA9A4u;
label_4fa9a4:
    // 0x4fa9a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4fa9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fa9a8: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x4fa9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x4fa9ac: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4FA9ACu;
    {
        const bool branch_taken_0x4fa9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FA9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA9ACu;
        // 0x4fa9b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa9ac) {
            ctx->pc = 0x4FA9E0u;
            goto label_4fa9e0;
        }
    }
    ctx->pc = 0x4FA9B4u;
    // 0x4fa9b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4fa9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fa9b8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x4fa9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x4fa9bc: 0x8c840230  lw          $a0, 0x230($a0)
    ctx->pc = 0x4fa9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000230u)); // MMIO: 0x70000230
    // 0x4fa9c0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x4fa9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4fa9c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4fa9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4fa9c8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4fa9c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4fa9cc: 0xc04072c  jal         func_101CB0
    ctx->pc = 0x4FA9CCu;
    SET_GPR_U32(ctx, 31, 0x4FA9D4u);
    ctx->pc = 0x4FA9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA9CCu;
    // 0x4fa9d0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101CB0u, 0x4FA9CCu, 0x4FA9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA9D4u;
label_4fa9d4:
    // 0x4fa9d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4FA9D4u;
    {
        const bool branch_taken_0x4fa9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA9D4u;
        // 0x4fa9d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa9d4) {
            ctx->pc = 0x4FA9ECu;
            goto label_4fa9ec;
        }
    }
    ctx->pc = 0x4FA9DCu;
    // 0x4fa9dc: 0x0  nop
    ctx->pc = 0x4fa9dcu;
    // NOP
label_4fa9e0:
    // 0x4fa9e0: 0xc04066a  jal         func_1019A8
    ctx->pc = 0x4FA9E0u;
    SET_GPR_U32(ctx, 31, 0x4FA9E8u);
    ctx->pc = 0x1019A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1019A8u, 0x4FA9E0u, 0x4FA9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA9E8u;
label_4fa9e8:
    // 0x4fa9e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4fa9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fa9ec:
    // 0x4fa9ec: 0xc0409b2  jal         func_1026C8
    ctx->pc = 0x4FA9ECu;
    SET_GPR_U32(ctx, 31, 0x4FA9F4u);
    ctx->pc = 0x4FA9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA9ECu;
    // 0x4fa9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026C8u, 0x4FA9ECu, 0x4FA9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA9F4u;
label_4fa9f4:
    // 0x4fa9f4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4FA9F4u;
    {
        const bool branch_taken_0x4fa9f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4FA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA9F4u;
        // 0x4fa9f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa9f4) {
            ctx->pc = 0x4FAA08u;
            goto label_4faa08;
        }
    }
    ctx->pc = 0x4FA9FCu;
    // 0x4fa9fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4fa9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4faa00: 0x8040884  j           func_102210
    ctx->pc = 0x4FAA00u;
    ctx->pc = 0x4FAA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAA00u;
    // 0x4faa04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102210u;
    sub_00102210_0x102210(rdram, ctx, runtime); return;
    ctx->pc = 0x4FAA08u;
label_4faa08:
    // 0x4faa08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4faa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4faa0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4FAA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAA0Cu;
        // 0x4faa10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FAA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FAA14u;
    // 0x4faa14: 0x0  nop
    ctx->pc = 0x4faa14u;
    // NOP
    ctx->pc = 0x4faa18u;
}
