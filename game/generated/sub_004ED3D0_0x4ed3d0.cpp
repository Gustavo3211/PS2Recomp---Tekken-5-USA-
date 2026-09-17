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

// Function: sub_004ED3D0
// Address: 0x4ed3d0 - 0x4ed4d8
void sub_004ED3D0_0x4ed3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED3D0_0x4ed3d0");
#endif

    switch (ctx->pc) {
        case 0x4ed410u: goto label_4ed410;
        case 0x4ed424u: goto label_4ed424;
        default: break;
    }

    ctx->pc = 0x4ed3d0u;

    // 0x4ed3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ed3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ed3d4: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x4ed3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x4ed3d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed3dc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ed3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ed3e0: 0xa482014a  sh          $v0, 0x14A($a0)
    ctx->pc = 0x4ed3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ed3e4: 0x24a51200  addiu       $a1, $a1, 0x1200
    ctx->pc = 0x4ed3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4608));
    // 0x4ed3e8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4ed3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4ed3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed3f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ed3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1200u));
    // 0x4ed3f4: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x4ed3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x4ed3f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ed3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ed3fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ed3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ed400: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ed400u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ed404: 0x813b504  j           func_4ED410
    ctx->pc = 0x4ED404u;
    ctx->pc = 0x4ED408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED404u;
    // 0x4ed408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED410u;
    goto label_4ed410;
    ctx->pc = 0x4ED40Cu;
    // 0x4ed40c: 0x0  nop
    ctx->pc = 0x4ed40cu;
    // NOP
label_4ed410:
    // 0x4ed410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ed410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ed414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ed414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ed418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ed418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ed41c: 0xc12b5f2  jal         func_4AD7C8
    ctx->pc = 0x4ED41Cu;
    SET_GPR_U32(ctx, 31, 0x4ED424u);
    ctx->pc = 0x4ED420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED41Cu;
    // 0x4ed420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4ED41Cu, 0x4ED424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED424u;
label_4ed424:
    // 0x4ed424: 0x240300a2  addiu       $v1, $zero, 0xA2
    ctx->pc = 0x4ed424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x4ed428: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4ed428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4ed42c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4ed42cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ed430: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x4ed430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4ed434: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4ed434u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4ed438: 0x3c0400a0  lui         $a0, 0xA0
    ctx->pc = 0x4ed438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)160 << 16));
    // 0x4ed43c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4ed43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ed440: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ed440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ed444: 0x24450014  addiu       $a1, $v0, 0x14
    ctx->pc = 0x4ed444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4ed448: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4ed448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4ed44c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4ed44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4ed450: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4ed450u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4ed454: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4ed454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4ed458: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4ed458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4ed45c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4ed45cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4ed460: 0x24c611e8  addiu       $a2, $a2, 0x11E8
    ctx->pc = 0x4ed460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4584));
    // 0x4ed464: 0x26100168  addiu       $s0, $s0, 0x168
    ctx->pc = 0x4ed464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x4ed468: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ed468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ed46c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4ed46cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ed470: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4ed470u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4ed474: 0x95231200  lhu         $v1, 0x1200($t1)
    ctx->pc = 0x4ed474u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4608)));
    // 0x4ed478: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4ed478u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ed47c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ed47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ed480: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x4ed480u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x4ed484: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ed484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ed488: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4ed488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4ed48c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4ed48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x4ed490: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4ed490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ed494: 0x848480f8  lh          $a0, -0x7F08($a0)
    ctx->pc = 0x4ed494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294934776)));
    // 0x4ed498: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4ed498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4ed49c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4ed49cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4ed4a0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4ed4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4ed4a4: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4ed4a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ed4a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4ed4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ed4ac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ed4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ed4b0: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4ed4b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4ed4b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed4b8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4ed4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ed4bc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4ed4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4ed4c0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ed4c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ed4c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ed4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ed4c8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4ed4c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ed4cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ed4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED4D0u;
        // 0x4ed4d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED4D8u;
}
