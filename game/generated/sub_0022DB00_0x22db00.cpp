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

// Function: sub_0022DB00
// Address: 0x22db00 - 0x22dc08
void sub_0022DB00_0x22db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DB00_0x22db00");
#endif

    switch (ctx->pc) {
        case 0x22db30u: goto label_22db30;
        case 0x22db40u: goto label_22db40;
        case 0x22db58u: goto label_22db58;
        case 0x22dbc0u: goto label_22dbc0;
        case 0x22dbd4u: goto label_22dbd4;
        default: break;
    }

    ctx->pc = 0x22db00u;

    // 0x22db00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22db04: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x22db04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x22db08: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x22db08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x22db0c: 0xc4542d94  lwc1        $f20, 0x2D94($v0)
    ctx->pc = 0x22db0cu;
    { uint32_t bits = FAST_READ32(0x152D94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22db10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22db10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22db14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22db14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db18: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22db18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22db1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22db1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22db20: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22db20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22db24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22db24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22db28: 0xc08b8a6  jal         func_22E298
    ctx->pc = 0x22DB28u;
    SET_GPR_U32(ctx, 31, 0x22DB30u);
    ctx->pc = 0x22DB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB28u;
    // 0x22db2c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E298u, 0x22DB28u, 0x22DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB30u;
label_22db30:
    // 0x22db30: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x22DB30u;
    {
        const bool branch_taken_0x22db30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB30u;
        // 0x22db34: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db30) {
            ctx->pc = 0x22DBE4u;
            goto label_22dbe4;
        }
    }
    ctx->pc = 0x22DB38u;
    // 0x22db38: 0xc08b3ee  jal         func_22CFB8
    ctx->pc = 0x22DB38u;
    SET_GPR_U32(ctx, 31, 0x22DB40u);
    ctx->pc = 0x22DB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB38u;
    // 0x22db3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CFB8u, 0x22DB38u, 0x22DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB40u;
label_22db40:
    // 0x22db40: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22db40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22db44: 0x1a000026  blez        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x22DB44u;
    {
        const bool branch_taken_0x22db44 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x22DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB44u;
        // 0x22db48: 0x8c520004  lw          $s2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db44) {
            ctx->pc = 0x22DBE0u;
            goto label_22dbe0;
        }
    }
    ctx->pc = 0x22DB4Cu;
    // 0x22db4c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x22db4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22db50: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x22db50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22db54: 0x0  nop
    ctx->pc = 0x22db54u;
    // NOP
label_22db58:
    // 0x22db58: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x22db58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x22db5c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x22db5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db60: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22db60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db64: 0xda300000  lqc2        $vf16, 0x0($s1)
    ctx->pc = 0x22db64u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22db68: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x22db68u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22db6c: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x22db6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x22db70: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x22db70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x22db74: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x22db74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22db78: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x22db78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x22db7c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x22db7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22db80: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x22db80u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x22db84: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x22db84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22db88: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x22db88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x22db8c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x22db8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x22db90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22db90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22db94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22DB94u;
    {
        const bool branch_taken_0x22db94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB94u;
        // 0x22db98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db94) {
            ctx->pc = 0x22DBA0u;
            goto label_22dba0;
        }
    }
    ctx->pc = 0x22DB9Cu;
    // 0x22db9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22db9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22dba0:
    // 0x22dba0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22DBA0u;
    {
        const bool branch_taken_0x22dba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dba0) {
            ctx->pc = 0x22DBD8u;
            goto label_22dbd8;
        }
    }
    ctx->pc = 0x22DBA8u;
    // 0x22dba8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x22dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x22dbac: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DBACu;
    {
        const bool branch_taken_0x22dbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x22DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBACu;
        // 0x22dbb0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbac) {
            ctx->pc = 0x22DBC8u;
            goto label_22dbc8;
        }
    }
    ctx->pc = 0x22DBB4u;
    // 0x22dbb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22dbb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22dbb8: 0xc08b55e  jal         func_22D578
    ctx->pc = 0x22DBB8u;
    SET_GPR_U32(ctx, 31, 0x22DBC0u);
    ctx->pc = 0x22DBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DBB8u;
    // 0x22dbbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D578u, 0x22DBB8u, 0x22DBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DBC0u;
label_22dbc0:
    // 0x22dbc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22DBC0u;
    {
        const bool branch_taken_0x22dbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBC0u;
        // 0x22dbc4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbc0) {
            ctx->pc = 0x22DBD8u;
            goto label_22dbd8;
        }
    }
    ctx->pc = 0x22DBC8u;
label_22dbc8:
    // 0x22dbc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22dbc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22dbcc: 0xc08b606  jal         func_22D818
    ctx->pc = 0x22DBCCu;
    SET_GPR_U32(ctx, 31, 0x22DBD4u);
    ctx->pc = 0x22DBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DBCCu;
    // 0x22dbd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D818u, 0x22DBCCu, 0x22DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DBD4u;
label_22dbd4:
    // 0x22dbd4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22dbd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_22dbd8:
    // 0x22dbd8: 0x5e00ffdf  bgtzl       $s0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x22DBD8u;
    {
        const bool branch_taken_0x22dbd8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x22dbd8) {
            ctx->pc = 0x22DBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DBD8u;
            // 0x22dbdc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22db58;
        }
    }
    ctx->pc = 0x22DBE0u;
label_22dbe0:
    // 0x22dbe0: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x22dbe0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_22dbe4:
    // 0x22dbe4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22dbe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22dbe8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22dbe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22dbec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22dbecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22dbf0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22dbf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22dbf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22dbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22dbf8: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x22dbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22dbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x22DBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBFCu;
        // 0x22dc00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DC04u;
    // 0x22dc04: 0x0  nop
    ctx->pc = 0x22dc04u;
    // NOP
    ctx->pc = 0x22dc08u;
}
