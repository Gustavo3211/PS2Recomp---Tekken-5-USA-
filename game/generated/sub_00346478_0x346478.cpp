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

// Function: sub_00346478
// Address: 0x346478 - 0x3465b0
void sub_00346478_0x346478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346478_0x346478");
#endif

    switch (ctx->pc) {
        case 0x34650cu: goto label_34650c;
        case 0x346524u: goto label_346524;
        case 0x346538u: goto label_346538;
        case 0x346558u: goto label_346558;
        case 0x346560u: goto label_346560;
        case 0x34658cu: goto label_34658c;
        default: break;
    }

    ctx->pc = 0x346478u;

    // 0x346478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x346478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34647c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x34647cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x346480: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346484: 0x24d00d00  addiu       $s0, $a2, 0xD00
    ctx->pc = 0x346484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 3328));
    // 0x346488: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x346488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34648c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34648cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346490: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x346490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x346494: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x346494u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x346498: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x346498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34649c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34649cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3464a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3464a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3464a4: 0x4824e000  qmfc2.ni    $a0, $vf28
    ctx->pc = 0x3464a4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3464a8: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3464a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3464ac: 0x708310a8  pceqw       $v0, $a0, $v1
    ctx->pc = 0x3464acu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x3464b0: 0x4824e800  qmfc2.ni    $a0, $vf29
    ctx->pc = 0x3464b0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3464b4: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x3464b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3464b8: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x3464b8u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x3464bc: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3464bcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3464c0: 0x4824f000  qmfc2.ni    $a0, $vf30
    ctx->pc = 0x3464c0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x3464c4: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x3464c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3464c8: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x3464c8u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x3464cc: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3464ccu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3464d0: 0x4824f800  qmfc2.ni    $a0, $vf31
    ctx->pc = 0x3464d0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x3464d4: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x3464d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3464d8: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x3464d8u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x3464dc: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3464dcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3464e0: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x3464e0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x3464e4: 0x70422ec8  ppacb       $a1, $v0, $v0
    ctx->pc = 0x3464e4u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x3464e8: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x3464e8u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x3464ec: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x3464ECu;
    {
        const bool branch_taken_0x3464ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3464ec) {
            ctx->pc = 0x34651Cu;
            goto label_34651c;
        }
    }
    ctx->pc = 0x3464F4u;
    // 0x3464f4: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x3464f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3464f8: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x3464f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3464fc: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x3464fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x346500: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x346500u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x346504: 0xc0c88a2  jal         func_322288
    ctx->pc = 0x346504u;
    SET_GPR_U32(ctx, 31, 0x34650Cu);
    ctx->pc = 0x346508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346504u;
    // 0x346508: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322288u, 0x346504u, 0x34650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34650Cu;
label_34650c:
    // 0x34650c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x34650cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x346510: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x346510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x346514: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x346514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x346518: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x346518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_34651c:
    // 0x34651c: 0xc0d17d8  jal         func_345F60
    ctx->pc = 0x34651Cu;
    SET_GPR_U32(ctx, 31, 0x346524u);
    ctx->pc = 0x346520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34651Cu;
    // 0x346520: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345F60u, 0x34651Cu, 0x346524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346524u;
label_346524:
    // 0x346524: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x346524u;
    {
        const bool branch_taken_0x346524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346524u;
        // 0x346528: 0x260401f4  addiu       $a0, $s0, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346524) {
            ctx->pc = 0x34658Cu;
            goto label_34658c;
        }
    }
    ctx->pc = 0x34652Cu;
    // 0x34652c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34652cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x346530: 0xc0d1ce0  jal         func_347380
    ctx->pc = 0x346530u;
    SET_GPR_U32(ctx, 31, 0x346538u);
    ctx->pc = 0x346534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346530u;
    // 0x346534: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347380u, 0x346530u, 0x346538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346538u;
label_346538:
    // 0x346538: 0x266303c0  addiu       $v1, $s3, 0x3C0
    ctx->pc = 0x346538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
    // 0x34653c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34653cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346540: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x346540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x346544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x346544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x346548: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x346548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34654c: 0x9650000a  lhu         $s0, 0xA($s2)
    ctx->pc = 0x34654cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x346550: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x346550u;
    {
        const bool branch_taken_0x346550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x346554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346550u;
        // 0x346554: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346550) {
            ctx->pc = 0x346570u;
            goto label_346570;
        }
    }
    ctx->pc = 0x346558u;
label_346558:
    // 0x346558: 0xc0d18f6  jal         func_3463D8
    ctx->pc = 0x346558u;
    SET_GPR_U32(ctx, 31, 0x346560u);
    ctx->pc = 0x34655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346558u;
    // 0x34655c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3463D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3463D8u, 0x346558u, 0x346560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346560u;
label_346560:
    // 0x346560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x346560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346564: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x346564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x346568: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x346568u;
    {
        const bool branch_taken_0x346568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346568) {
            ctx->pc = 0x346558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346558;
        }
    }
    ctx->pc = 0x346570u;
label_346570:
    // 0x346570: 0x266403c0  addiu       $a0, $s3, 0x3C0
    ctx->pc = 0x346570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
    // 0x346574: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x346574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x346578: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x346578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34657c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34657Cu;
    {
        const bool branch_taken_0x34657c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x346580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34657Cu;
        // 0x346580: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34657c) {
            ctx->pc = 0x34658Cu;
            goto label_34658c;
        }
    }
    ctx->pc = 0x346584u;
    // 0x346584: 0xc0ce218  jal         func_338860
    ctx->pc = 0x346584u;
    SET_GPR_U32(ctx, 31, 0x34658Cu);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x346584u, 0x34658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34658Cu;
label_34658c:
    // 0x34658c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34658cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346594: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x346594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346598: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x346598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34659c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34659cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3465a0: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x3465a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3465a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3465A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3465A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3465A4u;
        // 0x3465a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3465A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3465ACu;
    // 0x3465ac: 0x0  nop
    ctx->pc = 0x3465acu;
    // NOP
    ctx->pc = 0x3465b0u;
}
