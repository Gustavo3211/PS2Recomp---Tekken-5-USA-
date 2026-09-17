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

// Function: sub_00346EE8
// Address: 0x346ee8 - 0x347020
void sub_00346EE8_0x346ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346EE8_0x346ee8");
#endif

    switch (ctx->pc) {
        case 0x346f84u: goto label_346f84;
        case 0x346fa4u: goto label_346fa4;
        case 0x346fc8u: goto label_346fc8;
        case 0x346fd0u: goto label_346fd0;
        case 0x346ffcu: goto label_346ffc;
        default: break;
    }

    ctx->pc = 0x346ee8u;

    // 0x346ee8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x346ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x346eec: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x346eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x346ef0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346ef4: 0x24d00d00  addiu       $s0, $a2, 0xD00
    ctx->pc = 0x346ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 3328));
    // 0x346ef8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x346ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x346efc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x346efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x346f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x346f04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x346f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f08: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x346f08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x346f0c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x346f0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x346f10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x346f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x346f14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x346f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x346f18: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x346f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x346f1c: 0x4824e000  qmfc2.ni    $a0, $vf28
    ctx->pc = 0x346f1cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x346f20: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x346f20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x346f24: 0x708310a8  pceqw       $v0, $a0, $v1
    ctx->pc = 0x346f24u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x346f28: 0x4824e800  qmfc2.ni    $a0, $vf29
    ctx->pc = 0x346f28u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x346f2c: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x346f2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x346f30: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x346f30u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x346f34: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x346f34u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x346f38: 0x4824f000  qmfc2.ni    $a0, $vf30
    ctx->pc = 0x346f38u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x346f3c: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x346f3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x346f40: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x346f40u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x346f44: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x346f44u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x346f48: 0x4824f800  qmfc2.ni    $a0, $vf31
    ctx->pc = 0x346f48u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x346f4c: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x346f4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x346f50: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x346f50u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x346f54: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x346f54u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x346f58: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x346f58u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x346f5c: 0x70422ec8  ppacb       $a1, $v0, $v0
    ctx->pc = 0x346f5cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x346f60: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x346f60u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x346f64: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x346F64u;
    {
        const bool branch_taken_0x346f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x346f64) {
            ctx->pc = 0x346F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346F64u;
            // 0x346f68: 0x260401f4  addiu       $a0, $s0, 0x1F4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 500));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346F98u;
            goto label_346f98;
        }
    }
    ctx->pc = 0x346F6Cu;
    // 0x346f6c: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x346f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x346f70: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x346f70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x346f74: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x346f74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x346f78: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x346f78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x346f7c: 0xc0c88a2  jal         func_322288
    ctx->pc = 0x346F7Cu;
    SET_GPR_U32(ctx, 31, 0x346F84u);
    ctx->pc = 0x346F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F7Cu;
    // 0x346f80: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322288u, 0x346F7Cu, 0x346F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F84u;
label_346f84:
    // 0x346f84: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x346f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x346f88: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x346f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x346f8c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x346f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x346f90: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x346f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x346f94: 0x260401f4  addiu       $a0, $s0, 0x1F4
    ctx->pc = 0x346f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 500));
label_346f98:
    // 0x346f98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x346f98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x346f9c: 0xc0d1ce0  jal         func_347380
    ctx->pc = 0x346F9Cu;
    SET_GPR_U32(ctx, 31, 0x346FA4u);
    ctx->pc = 0x346FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F9Cu;
    // 0x346fa0: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347380u, 0x346F9Cu, 0x346FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346FA4u;
label_346fa4:
    // 0x346fa4: 0x268303c0  addiu       $v1, $s4, 0x3C0
    ctx->pc = 0x346fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 960));
    // 0x346fa8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x346fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346fac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x346facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x346fb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x346fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x346fb4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x346fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x346fb8: 0x9650000a  lhu         $s0, 0xA($s2)
    ctx->pc = 0x346fb8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x346fbc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x346FBCu;
    {
        const bool branch_taken_0x346fbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x346FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346FBCu;
        // 0x346fc0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346fbc) {
            ctx->pc = 0x346FE0u;
            goto label_346fe0;
        }
    }
    ctx->pc = 0x346FC4u;
    // 0x346fc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x346fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_346fc8:
    // 0x346fc8: 0xc0d1b78  jal         func_346DE0
    ctx->pc = 0x346FC8u;
    SET_GPR_U32(ctx, 31, 0x346FD0u);
    ctx->pc = 0x346FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346FC8u;
    // 0x346fcc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346DE0u, 0x346FC8u, 0x346FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346FD0u;
label_346fd0:
    // 0x346fd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x346fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346fd4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x346fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x346fd8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x346FD8u;
    {
        const bool branch_taken_0x346fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346FD8u;
        // 0x346fdc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346fd8) {
            ctx->pc = 0x346FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346fc8;
        }
    }
    ctx->pc = 0x346FE0u;
label_346fe0:
    // 0x346fe0: 0x268403c0  addiu       $a0, $s4, 0x3C0
    ctx->pc = 0x346fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 960));
    // 0x346fe4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x346fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x346fe8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x346fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x346fec: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x346FECu;
    {
        const bool branch_taken_0x346fec = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x346FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346FECu;
        // 0x346ff0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346fec) {
            ctx->pc = 0x346FFCu;
            goto label_346ffc;
        }
    }
    ctx->pc = 0x346FF4u;
    // 0x346ff4: 0xc0ce218  jal         func_338860
    ctx->pc = 0x346FF4u;
    SET_GPR_U32(ctx, 31, 0x346FFCu);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x346FF4u, 0x346FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346FFCu;
label_346ffc:
    // 0x346ffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347000: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347004: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x347004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347008: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x347008u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34700c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34700cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347010: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x347010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x347014: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x347014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x347018: 0x3e00008  jr          $ra
    ctx->pc = 0x347018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347018u;
        // 0x34701c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347020u;
}
