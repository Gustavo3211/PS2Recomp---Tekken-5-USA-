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

// Function: sub_0026D310
// Address: 0x26d310 - 0x26d590
void sub_0026D310_0x26d310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D310_0x26d310");
#endif

    switch (ctx->pc) {
        case 0x26d34cu: goto label_26d34c;
        case 0x26d388u: goto label_26d388;
        case 0x26d3b0u: goto label_26d3b0;
        case 0x26d3d4u: goto label_26d3d4;
        case 0x26d3e0u: goto label_26d3e0;
        case 0x26d3f0u: goto label_26d3f0;
        case 0x26d448u: goto label_26d448;
        case 0x26d4bcu: goto label_26d4bc;
        case 0x26d554u: goto label_26d554;
        case 0x26d560u: goto label_26d560;
        default: break;
    }

    ctx->pc = 0x26d310u;

    // 0x26d310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26d310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26d314: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26d314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26d318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26d31c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26d31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26d320: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26d320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26d324: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26d324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26d328: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26d328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x26d32c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x26d32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x26d330: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x26d330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x26d334: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x26d334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x26d338: 0x8c7000a8  lw          $s0, 0xA8($v1)
    ctx->pc = 0x26d338u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x26d33c: 0x1a000089  blez        $s0, . + 4 + (0x89 << 2)
    ctx->pc = 0x26D33Cu;
    {
        const bool branch_taken_0x26d33c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x26D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D33Cu;
        // 0x26d340: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d33c) {
            ctx->pc = 0x26D564u;
            goto label_26d564;
        }
    }
    ctx->pc = 0x26D344u;
    // 0x26d344: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26D344u;
    SET_GPR_U32(ctx, 31, 0x26D34Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26D344u, 0x26D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D34Cu;
label_26d34c:
    // 0x26d34c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x26d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x26d350: 0x24758858  addiu       $s5, $v1, -0x77A8
    ctx->pc = 0x26d350u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x26d354: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x26d354u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x26d358: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26d358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26d35c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26d360: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x26d360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x26d364: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26d364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d368: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x26d368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26d36c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x26d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x26d370: 0xaea30064  sw          $v1, 0x64($s5)
    ctx->pc = 0x26d370u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
    // 0x26d374: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x26d374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x26d378: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x26d378u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x26d37c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x26d37cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x26d380: 0xc09b45e  jal         func_26D178
    ctx->pc = 0x26D380u;
    SET_GPR_U32(ctx, 31, 0x26D388u);
    ctx->pc = 0x26D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D380u;
    // 0x26d384: 0x223c3  sra         $a0, $v0, 15 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D178u, 0x26D380u, 0x26D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D388u;
label_26d388:
    // 0x26d388: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26d388u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d38c: 0x6800075  bltz        $s4, . + 4 + (0x75 << 2)
    ctx->pc = 0x26D38Cu;
    {
        const bool branch_taken_0x26d38c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x26D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D38Cu;
        // 0x26d390: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d38c) {
            ctx->pc = 0x26D564u;
            goto label_26d564;
        }
    }
    ctx->pc = 0x26D394u;
    // 0x26d394: 0x149840  sll         $s3, $s4, 1
    ctx->pc = 0x26d394u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x26d398: 0x3c160017  lui         $s6, 0x17
    ctx->pc = 0x26d398u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
    // 0x26d39c: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x26d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x26d3a0: 0x26d0f718  addiu       $s0, $s6, -0x8E8
    ctx->pc = 0x26d3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965016));
    // 0x26d3a4: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x26d3a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26d3a8: 0xc09b24a  jal         func_26C928
    ctx->pc = 0x26D3A8u;
    SET_GPR_U32(ctx, 31, 0x26D3B0u);
    ctx->pc = 0x26D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3A8u;
    // 0x26d3ac: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C928u, 0x26D3A8u, 0x26D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3B0u;
label_26d3b0:
    // 0x26d3b0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26D3B0u;
    {
        const bool branch_taken_0x26d3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3B0u;
        // 0x26d3b4: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3b0) {
            ctx->pc = 0x26D3E8u;
            goto label_26d3e8;
        }
    }
    ctx->pc = 0x26D3B8u;
    // 0x26d3b8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26d3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x26d3bc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x26d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26d3c0: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x26d3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x26d3c4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x26d3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26d3c8: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x26d3c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26d3cc: 0xc09981c  jal         func_266070
    ctx->pc = 0x26D3CCu;
    SET_GPR_U32(ctx, 31, 0x26D3D4u);
    ctx->pc = 0x26D3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3CCu;
    // 0x26d3d0: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266070u, 0x26D3CCu, 0x26D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3D4u;
label_26d3d4:
    // 0x26d3d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26d3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26d3d8: 0xc09b430  jal         func_26D0C0
    ctx->pc = 0x26D3D8u;
    SET_GPR_U32(ctx, 31, 0x26D3E0u);
    ctx->pc = 0x26D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3D8u;
    // 0x26d3dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D0C0u, 0x26D3D8u, 0x26D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3E0u;
label_26d3e0:
    // 0x26d3e0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x26D3E0u;
    {
        const bool branch_taken_0x26d3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3E0u;
        // 0x26d3e4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3e0) {
            ctx->pc = 0x26D564u;
            goto label_26d564;
        }
    }
    ctx->pc = 0x26D3E8u;
label_26d3e8:
    // 0x26d3e8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26D3E8u;
    SET_GPR_U32(ctx, 31, 0x26D3F0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26D3E8u, 0x26D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3F0u;
label_26d3f0:
    // 0x26d3f0: 0x8f92aa78  lw          $s2, -0x5588($gp)
    ctx->pc = 0x26d3f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d3f4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26d3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26d3f8: 0x864303a6  lh          $v1, 0x3A6($s2)
    ctx->pc = 0x26d3f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 934)));
    // 0x26d3fc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26d3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26d400: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x26D400u;
    {
        const bool branch_taken_0x26d400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D400u;
        // 0x26d404: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d400) {
            ctx->pc = 0x26D538u;
            goto label_26d538;
        }
    }
    ctx->pc = 0x26D408u;
    // 0x26d408: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26d408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26d40c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x26d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26d410: 0x84630096  lh          $v1, 0x96($v1)
    ctx->pc = 0x26d410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x26d414: 0x94900014  lhu         $s0, 0x14($a0)
    ctx->pc = 0x26d414u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x26d418: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x26d418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26d41c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26D41Cu;
    {
        const bool branch_taken_0x26d41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D41Cu;
        // 0x26d420: 0x94820012  lhu         $v0, 0x12($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d41c) {
            ctx->pc = 0x26D4A8u;
            goto label_26d4a8;
        }
    }
    ctx->pc = 0x26D424u;
    // 0x26d424: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26d424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d428: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x26d428u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x26d42c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x26d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26d430: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26d430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26d434: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x26d434u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
    // 0x26d438: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x26D438u;
    {
        const bool branch_taken_0x26d438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D438u;
        // 0x26d43c: 0x708821  addu        $s1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d438) {
            ctx->pc = 0x26D478u;
            goto label_26d478;
        }
    }
    ctx->pc = 0x26D440u;
    // 0x26d440: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26D440u;
    SET_GPR_U32(ctx, 31, 0x26D448u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26D440u, 0x26D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D448u;
label_26d448:
    // 0x26d448: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x26d448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x26d44c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26d450: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26d450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26d454: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x26d454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x26d458: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26d458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d45c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x26d45cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26d460: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x26d460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x26d464: 0xaea30064  sw          $v1, 0x64($s5)
    ctx->pc = 0x26d464u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
    // 0x26d468: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x26d468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x26d46c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x26d46cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x26d470: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x26d470u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x26d474: 0x223c3  sra         $a0, $v0, 15
    ctx->pc = 0x26d474u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 15));
label_26d478:
    // 0x26d478: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x26d478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x26d47c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26d47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d480: 0xae430264  sw          $v1, 0x264($s2)
    ctx->pc = 0x26d480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 3));
    // 0x26d484: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x26d484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x26d488: 0x26c5f718  addiu       $a1, $s6, -0x8E8
    ctx->pc = 0x26d488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965016));
    // 0x26d48c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26d490: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26d490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d494: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x26d494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26d498: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26d498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d49c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x26D49Cu;
    {
        const bool branch_taken_0x26d49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D49Cu;
        // 0x26d4a0: 0xac660258  sw          $a2, 0x258($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 600), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d49c) {
            ctx->pc = 0x26D510u;
            goto label_26d510;
        }
    }
    ctx->pc = 0x26D4A4u;
    // 0x26d4a4: 0x0  nop
    ctx->pc = 0x26d4a4u;
    // NOP
label_26d4a8:
    // 0x26d4a8: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x26d4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26d4ac: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x26D4ACu;
    {
        const bool branch_taken_0x26d4ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4ACu;
        // 0x26d4b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4ac) {
            ctx->pc = 0x26D4ECu;
            goto label_26d4ec;
        }
    }
    ctx->pc = 0x26D4B4u;
    // 0x26d4b4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26D4B4u;
    SET_GPR_U32(ctx, 31, 0x26D4BCu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26D4B4u, 0x26D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4BCu;
label_26d4bc:
    // 0x26d4bc: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x26d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x26d4c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26d4c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26d4c8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x26d4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x26d4cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d4d0: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x26d4d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26d4d4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x26d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x26d4d8: 0xaea30064  sw          $v1, 0x64($s5)
    ctx->pc = 0x26d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
    // 0x26d4dc: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x26d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x26d4e0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x26d4e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x26d4e4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x26d4e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x26d4e8: 0x223c3  sra         $a0, $v0, 15
    ctx->pc = 0x26d4e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 15));
label_26d4ec:
    // 0x26d4ec: 0xae440264  sw          $a0, 0x264($s2)
    ctx->pc = 0x26d4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 4));
    // 0x26d4f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26d4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d4f4: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x26d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x26d4f8: 0x26c5f718  addiu       $a1, $s6, -0x8E8
    ctx->pc = 0x26d4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965016));
    // 0x26d4fc: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26d4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d500: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26d500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26d504: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x26d504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26d508: 0xac660258  sw          $a2, 0x258($v1)
    ctx->pc = 0x26d508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 600), GPR_U32(ctx, 6));
    // 0x26d50c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26d50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26d510:
    // 0x26d510: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26d510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d514: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x26d514u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x26d518: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26d518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26d51c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d520: 0xac43025c  sw          $v1, 0x25C($v0)
    ctx->pc = 0x26d520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 604), GPR_U32(ctx, 3));
    // 0x26d524: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x26d524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x26d528: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d52c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26D52Cu;
    {
        const bool branch_taken_0x26d52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D52Cu;
        // 0x26d530: 0xac440260  sw          $a0, 0x260($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d52c) {
            ctx->pc = 0x26D560u;
            goto label_26d560;
        }
    }
    ctx->pc = 0x26D534u;
    // 0x26d534: 0x0  nop
    ctx->pc = 0x26d534u;
    // NOP
label_26d538:
    // 0x26d538: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26d538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x26d53c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x26d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26d540: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x26d540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x26d544: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x26d544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26d548: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x26d548u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26d54c: 0xc09981c  jal         func_266070
    ctx->pc = 0x26D54Cu;
    SET_GPR_U32(ctx, 31, 0x26D554u);
    ctx->pc = 0x26D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D54Cu;
    // 0x26d550: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266070u, 0x26D54Cu, 0x26D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D554u;
label_26d554:
    // 0x26d554: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26d554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26d558: 0xc09b430  jal         func_26D0C0
    ctx->pc = 0x26D558u;
    SET_GPR_U32(ctx, 31, 0x26D560u);
    ctx->pc = 0x26D55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D558u;
    // 0x26d55c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D0C0u, 0x26D558u, 0x26D560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D560u;
label_26d560:
    // 0x26d560: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x26d560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26d564:
    // 0x26d564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26d564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d568: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26d568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26d56c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26d56cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d570: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x26d570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26d574: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x26d574u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d578: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x26d578u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d57c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x26d57cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d580: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x26d580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26d584: 0x3e00008  jr          $ra
    ctx->pc = 0x26D584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D584u;
        // 0x26d588: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D58Cu;
    // 0x26d58c: 0x0  nop
    ctx->pc = 0x26d58cu;
    // NOP
    ctx->pc = 0x26d590u;
}
