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

// Function: sub_00376290
// Address: 0x376290 - 0x3764b0
void sub_00376290_0x376290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376290_0x376290");
#endif

    switch (ctx->pc) {
        case 0x3762acu: goto label_3762ac;
        case 0x3762dcu: goto label_3762dc;
        case 0x37630cu: goto label_37630c;
        case 0x37633cu: goto label_37633c;
        case 0x37636cu: goto label_37636c;
        case 0x37639cu: goto label_37639c;
        case 0x3763ccu: goto label_3763cc;
        case 0x376404u: goto label_376404;
        case 0x376434u: goto label_376434;
        case 0x376488u: goto label_376488;
        case 0x37649cu: goto label_37649c;
        default: break;
    }

    ctx->pc = 0x376290u;

    // 0x376290: 0x3e00008  jr          $ra
    ctx->pc = 0x376290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376298u;
    // 0x376298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x376298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37629c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3762a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3762a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3762a4: 0xc0cf24c  jal         func_33C930
    ctx->pc = 0x3762A4u;
    SET_GPR_U32(ctx, 31, 0x3762ACu);
    ctx->pc = 0x3762A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3762A4u;
    // 0x3762a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x3762A4u, 0x3762ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3762ACu;
label_3762ac:
    // 0x3762ac: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3762acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3762b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3762b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3762b4: 0x24632668  addiu       $v1, $v1, 0x2668
    ctx->pc = 0x3762b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9832));
    // 0x3762b8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3762b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x3762bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3762bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3762c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3762C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3762C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762C0u;
        // 0x3762c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3762C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3762C8u;
    // 0x3762c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3762c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3762cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3762ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3762d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3762d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3762d4: 0xc0cf24c  jal         func_33C930
    ctx->pc = 0x3762D4u;
    SET_GPR_U32(ctx, 31, 0x3762DCu);
    ctx->pc = 0x3762D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3762D4u;
    // 0x3762d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x3762D4u, 0x3762DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3762DCu;
label_3762dc:
    // 0x3762dc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3762dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3762e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3762e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3762e4: 0x246326d8  addiu       $v1, $v1, 0x26D8
    ctx->pc = 0x3762e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9944));
    // 0x3762e8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3762e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x3762ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3762ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3762f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3762F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3762F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762F0u;
        // 0x3762f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3762F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3762F8u;
    // 0x3762f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3762f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3762fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3762fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x376300: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x376300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x376304: 0xc0cf24c  jal         func_33C930
    ctx->pc = 0x376304u;
    SET_GPR_U32(ctx, 31, 0x37630Cu);
    ctx->pc = 0x376308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376304u;
    // 0x376308: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x376304u, 0x37630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37630Cu;
label_37630c:
    // 0x37630c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x37630cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x376310: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x376310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x376314: 0x24632748  addiu       $v1, $v1, 0x2748
    ctx->pc = 0x376314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10056));
    // 0x376318: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x376318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x37631c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37631cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376320: 0x3e00008  jr          $ra
    ctx->pc = 0x376320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376320u;
        // 0x376324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376328u;
    // 0x376328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x376328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37632c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37632cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x376330: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x376330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x376334: 0xc0cf24c  jal         func_33C930
    ctx->pc = 0x376334u;
    SET_GPR_U32(ctx, 31, 0x37633Cu);
    ctx->pc = 0x376338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376334u;
    // 0x376338: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x376334u, 0x37633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37633Cu;
label_37633c:
    // 0x37633c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x37633cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x376340: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x376340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x376344: 0x246327b8  addiu       $v1, $v1, 0x27B8
    ctx->pc = 0x376344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10168));
    // 0x376348: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x376348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x37634c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37634cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376350: 0x3e00008  jr          $ra
    ctx->pc = 0x376350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376350u;
        // 0x376354: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376358u;
    // 0x376358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x376358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37635c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37635cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x376360: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x376360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x376364: 0xc0cf24c  jal         func_33C930
    ctx->pc = 0x376364u;
    SET_GPR_U32(ctx, 31, 0x37636Cu);
    ctx->pc = 0x376368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376364u;
    // 0x376368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x376364u, 0x37636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37636Cu;
label_37636c:
    // 0x37636c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x37636cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x376370: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x376370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x376374: 0x24632828  addiu       $v1, $v1, 0x2828
    ctx->pc = 0x376374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
    // 0x376378: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x376378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x37637c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37637cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376380: 0x3e00008  jr          $ra
    ctx->pc = 0x376380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376380u;
        // 0x376384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376388u;
    // 0x376388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x376388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37638c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37638cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x376390: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x376390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x376394: 0xc0cf24c  jal         func_33C930
    ctx->pc = 0x376394u;
    SET_GPR_U32(ctx, 31, 0x37639Cu);
    ctx->pc = 0x376398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376394u;
    // 0x376398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x376394u, 0x37639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37639Cu;
label_37639c:
    // 0x37639c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x37639cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3763a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3763a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3763a4: 0x24632898  addiu       $v1, $v1, 0x2898
    ctx->pc = 0x3763a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10392));
    // 0x3763a8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3763a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x3763ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3763acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3763b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3763B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3763B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3763B0u;
        // 0x3763b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3763B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3763B8u;
    // 0x3763b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3763b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3763bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3763bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3763c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3763c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3763c4: 0xc0cf24c  jal         func_33C930
    ctx->pc = 0x3763C4u;
    SET_GPR_U32(ctx, 31, 0x3763CCu);
    ctx->pc = 0x3763C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3763C4u;
    // 0x3763c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x3763C4u, 0x3763CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763CCu;
label_3763cc:
    // 0x3763cc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3763ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3763d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3763d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3763d4: 0x24632908  addiu       $v1, $v1, 0x2908
    ctx->pc = 0x3763d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10504));
    // 0x3763d8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3763d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x3763dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3763dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3763e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3763E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3763E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3763E0u;
        // 0x3763e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3763E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3763E8u;
    // 0x3763e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3763E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3763ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3763E8u;
        // 0x3763ec: 0xa4850014  sh          $a1, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3763E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3763F0u;
    // 0x3763f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3763f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3763f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3763f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3763f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3763f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3763fc: 0xc0cf24c  jal         func_33C930
    ctx->pc = 0x3763FCu;
    SET_GPR_U32(ctx, 31, 0x376404u);
    ctx->pc = 0x376400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3763FCu;
    // 0x376400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x3763FCu, 0x376404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376404u;
label_376404:
    // 0x376404: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x376404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x376408: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x376408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37640c: 0x24632950  addiu       $v1, $v1, 0x2950
    ctx->pc = 0x37640cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10576));
    // 0x376410: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x376410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x376414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x376414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376418: 0x3e00008  jr          $ra
    ctx->pc = 0x376418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376418u;
        // 0x37641c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376420u;
    // 0x376420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x376420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x376424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x376424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x376428: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x376428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37642c: 0xc0cf24c  jal         func_33C930
    ctx->pc = 0x37642Cu;
    SET_GPR_U32(ctx, 31, 0x376434u);
    ctx->pc = 0x376430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37642Cu;
    // 0x376430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x37642Cu, 0x376434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376434u;
label_376434:
    // 0x376434: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x376434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x376438: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x376438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37643c: 0x24632998  addiu       $v1, $v1, 0x2998
    ctx->pc = 0x37643cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10648));
    // 0x376440: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x376440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x376444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x376444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376448: 0x3e00008  jr          $ra
    ctx->pc = 0x376448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376448u;
        // 0x37644c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376450u;
    // 0x376450: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x376450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x376454: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x376454u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x376458: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x376458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37645c: 0x3e00008  jr          $ra
    ctx->pc = 0x37645Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37645Cu;
        // 0x376460: 0x2103e  dsrl32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37645Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376464u;
    // 0x376464: 0x0  nop
    ctx->pc = 0x376464u;
    // NOP
    // 0x376468: 0x3e00008  jr          $ra
    ctx->pc = 0x376468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376470u;
    // 0x376470: 0x3e00008  jr          $ra
    ctx->pc = 0x376470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376478u;
    // 0x376478: 0x3e00008  jr          $ra
    ctx->pc = 0x376478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376480u;
    // 0x376480: 0x3e00008  jr          $ra
    ctx->pc = 0x376480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376480u;
        // 0x376484: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376488u;
label_376488:
    // 0x376488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x376488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37648c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37648cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x376490: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x376490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x376494: 0xc0dd94e  jal         func_376538
    ctx->pc = 0x376494u;
    SET_GPR_U32(ctx, 31, 0x37649Cu);
    ctx->pc = 0x376498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376494u;
    // 0x376498: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376538u, 0x376494u, 0x37649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37649Cu;
label_37649c:
    // 0x37649c: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x37649cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3764a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3764a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3764a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3764a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3764a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3764A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3764ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764A8u;
        // 0x3764ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3764A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3764B0u;
}
