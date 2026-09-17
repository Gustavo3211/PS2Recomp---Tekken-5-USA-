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

// Function: sub_002A00B0
// Address: 0x2a00b0 - 0x2a0160
void sub_002A00B0_0x2a00b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A00B0_0x2a00b0");
#endif

    switch (ctx->pc) {
        case 0x2a00ccu: goto label_2a00cc;
        case 0x2a00d4u: goto label_2a00d4;
        case 0x2a00fcu: goto label_2a00fc;
        case 0x2a0114u: goto label_2a0114;
        case 0x2a014cu: goto label_2a014c;
        default: break;
    }

    ctx->pc = 0x2a00b0u;

    // 0x2a00b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a00b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a00b4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2a00b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2a00b8: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x2a00b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x2a00bc: 0x261077e0  addiu       $s0, $s0, 0x77E0
    ctx->pc = 0x2a00bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30688));
    // 0x2a00c0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2a00c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2a00c4: 0xc0a80a8  jal         func_2A02A0
    ctx->pc = 0x2A00C4u;
    SET_GPR_U32(ctx, 31, 0x2A00CCu);
    ctx->pc = 0x2A00C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A00C4u;
    // 0x2a00c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A02A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A02A0u, 0x2A00C4u, 0x2A00CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00CCu;
label_2a00cc:
    // 0x2a00cc: 0xc0a80a8  jal         func_2A02A0
    ctx->pc = 0x2A00CCu;
    SET_GPR_U32(ctx, 31, 0x2A00D4u);
    ctx->pc = 0x2A00D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A00CCu;
    // 0x2a00d0: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A02A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A02A0u, 0x2A00CCu, 0x2A00D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00D4u;
label_2a00d4:
    // 0x2a00d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a00d8: 0x94468414  lhu         $a2, -0x7BEC($v0)
    ctx->pc = 0x2a00d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x3A8414u));
    // 0x2a00dc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2a00dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a00e0: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x2a00e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2a00e4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2a00e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2a00e8: 0x28c20064  slti        $v0, $a2, 0x64
    ctx->pc = 0x2a00e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2a00ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a00ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a00f0: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x2a00f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2a00f4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2A00F4u;
    SET_GPR_U32(ctx, 31, 0x2A00FCu);
    ctx->pc = 0x2A00F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A00F4u;
    // 0x2a00f8: 0x24a53f48  addiu       $a1, $a1, 0x3F48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A00F4u, 0x2A00FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00FCu;
label_2a00fc:
    // 0x2a00fc: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2a00fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2a0100: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a0100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0104: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a0104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0108: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a0108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a010c: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x2A010Cu;
    SET_GPR_U32(ctx, 31, 0x2A0114u);
    ctx->pc = 0x2A0110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A010Cu;
    // 0x2a0110: 0xa3a00050  sb          $zero, 0x50($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x2A010Cu, 0x2A0114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0114u;
label_2a0114:
    // 0x2a0114: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a0114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a0118: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x2a0118u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x2a011c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2a011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0120: 0x2484cbd0  addiu       $a0, $a0, -0x3430
    ctx->pc = 0x2a0120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953936));
    // 0x2a0124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a0124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0128: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a0128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a012c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2a012cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2a0130: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a0130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0134: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x2a0134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2a0138: 0x240a0055  addiu       $t2, $zero, 0x55
    ctx->pc = 0x2a0138u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x2a013c: 0x240b006e  addiu       $t3, $zero, 0x6E
    ctx->pc = 0x2a013cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a0140: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2a0140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2a0144: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A0144u;
    SET_GPR_U32(ctx, 31, 0x2A014Cu);
    ctx->pc = 0x2A0148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0144u;
    // 0x2a0148: 0xa7a00030  sh          $zero, 0x30($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A0144u, 0x2A014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A014Cu;
label_2a014c:
    // 0x2a014c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2a014cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0150: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2a0150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a0154: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0154u;
        // 0x2a0158: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A015Cu;
    // 0x2a015c: 0x0  nop
    ctx->pc = 0x2a015cu;
    // NOP
    ctx->pc = 0x2a0160u;
}
