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

// Function: sub_00205DA8
// Address: 0x205da8 - 0x206128
void sub_00205DA8_0x205da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205DA8_0x205da8");
#endif

    switch (ctx->pc) {
        case 0x205e4cu: goto label_205e4c;
        case 0x205e64u: goto label_205e64;
        case 0x205ec0u: goto label_205ec0;
        case 0x205fc0u: goto label_205fc0;
        case 0x205fe0u: goto label_205fe0;
        case 0x2060e4u: goto label_2060e4;
        default: break;
    }

    ctx->pc = 0x205da8u;

    // 0x205da8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x205da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x205dac: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x205dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x205db0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x205db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205db4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x205db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x205db8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x205db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205dbc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x205dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x205dc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x205dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205dc4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x205dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x205dc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x205dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205dcc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x205dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x205dd0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x205dd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205dd4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x205dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x205dd8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x205dd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ddc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x205ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x205de0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x205de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205de4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x205de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x205de8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x205de8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205dec: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x205decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x205df0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x205df0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x205df4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x205df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x205df8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x205df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x205dfc: 0x8623014e  lh          $v1, 0x14E($s1)
    ctx->pc = 0x205dfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 334)));
    // 0x205e00: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x205e00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x205e04: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x205e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x205e08: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x205e08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x205e0c: 0x96230162  lhu         $v1, 0x162($s1)
    ctx->pc = 0x205e0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 354)));
    // 0x205e10: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x205e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x205e14: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x205e14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x205e18: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x205e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205e1c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x205e1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x205e20: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x205e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205e24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x205e24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x205e28: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x205e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x205e2c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x205e2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x205e30: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x205e30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x205e34: 0x44121800  mfc1        $s2, $f3
    ctx->pc = 0x205e34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x205e38: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x205e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x205e3c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x205e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x205e40: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x205e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x205e44: 0xc0847da  jal         func_211F68
    ctx->pc = 0x205E44u;
    SET_GPR_U32(ctx, 31, 0x205E4Cu);
    ctx->pc = 0x205E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E44u;
    // 0x205e48: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x205E44u, 0x205E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E4Cu;
label_205e4c:
    // 0x205e4c: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x205e4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x205e50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x205e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x205e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x205e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e5c: 0xc08163a  jal         func_2058E8
    ctx->pc = 0x205E5Cu;
    SET_GPR_U32(ctx, 31, 0x205E64u);
    ctx->pc = 0x205E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E5Cu;
    // 0x205e60: 0x26270750  addiu       $a3, $s1, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058E8u, 0x205E5Cu, 0x205E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E64u;
label_205e64:
    // 0x205e64: 0x922201ac  lbu         $v0, 0x1AC($s1)
    ctx->pc = 0x205e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x205e68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x205E68u;
    {
        const bool branch_taken_0x205e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E68u;
        // 0x205e6c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e68) {
            ctx->pc = 0x205EA0u;
            goto label_205ea0;
        }
    }
    ctx->pc = 0x205E70u;
    // 0x205e70: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x205e70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x205e74: 0x8e84006c  lw          $a0, 0x6C($s4)
    ctx->pc = 0x205e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x205e78: 0x346386a0  ori         $v1, $v1, 0x86A0
    ctx->pc = 0x205e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34464);
    // 0x205e7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x205e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205e80: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x205e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x205e84: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x205e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x205e88: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x205e88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x205e8c: 0xa0930030  sb          $s3, 0x30($a0)
    ctx->pc = 0x205e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 19));
    // 0x205e90: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x205e90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x205e94: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x205e94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205e98: 0xa0850031  sb          $a1, 0x31($a0)
    ctx->pc = 0x205e98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 5));
    // 0x205e9c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x205e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_205ea0:
    // 0x205ea0: 0x12400096  beqz        $s2, . + 4 + (0x96 << 2)
    ctx->pc = 0x205EA0u;
    {
        const bool branch_taken_0x205ea0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x205EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EA0u;
        // 0x205ea4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ea0) {
            ctx->pc = 0x2060FCu;
            goto label_2060fc;
        }
    }
    ctx->pc = 0x205EA8u;
    // 0x205ea8: 0x8622017c  lh          $v0, 0x17C($s1)
    ctx->pc = 0x205ea8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x205eac: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x205EACu;
    {
        const bool branch_taken_0x205eac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x205EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EACu;
        // 0x205eb0: 0x9629017c  lhu         $t1, 0x17C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205eac) {
            ctx->pc = 0x205EE0u;
            goto label_205ee0;
        }
    }
    ctx->pc = 0x205EB4u;
    // 0x205eb4: 0x8e880060  lw          $t0, 0x60($s4)
    ctx->pc = 0x205eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x205eb8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x205eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ebc: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x205ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_205ec0:
    // 0x205ec0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x205ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x205ec4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x205ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x205ec8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x205ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x205ecc: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x205eccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x205ed0: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x205ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x205ed4: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x205ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x205ed8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x205ED8u;
    {
        const bool branch_taken_0x205ed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x205EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205ED8u;
        // 0x205edc: 0x3980a  movz        $s3, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ed8) {
            ctx->pc = 0x205EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205ec0;
        }
    }
    ctx->pc = 0x205EE0u;
label_205ee0:
    // 0x205ee0: 0x8623017e  lh          $v1, 0x17E($s1)
    ctx->pc = 0x205ee0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 382)));
    // 0x205ee4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x205ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x205ee8: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x205EE8u;
    {
        const bool branch_taken_0x205ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x205EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EE8u;
        // 0x205eec: 0x761026  xor         $v0, $v1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ee8) {
            ctx->pc = 0x205EF4u;
            goto label_205ef4;
        }
    }
    ctx->pc = 0x205EF0u;
    // 0x205ef0: 0x2980b  movn        $s3, $zero, $v0
    ctx->pc = 0x205ef0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_205ef4:
    // 0x205ef4: 0x12600082  beqz        $s3, . + 4 + (0x82 << 2)
    ctx->pc = 0x205EF4u;
    {
        const bool branch_taken_0x205ef4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x205EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EF4u;
        // 0x205ef8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ef4) {
            ctx->pc = 0x206100u;
            goto label_206100;
        }
    }
    ctx->pc = 0x205EFCu;
    // 0x205efc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x205efcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205f00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x205f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x205f04: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x205f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x205f08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x205f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205f0c: 0xc62201e0  lwc1        $f2, 0x1E0($s1)
    ctx->pc = 0x205f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x205f10: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x205f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x205f14: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x205f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x205f18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x205f18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x205f1c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x205f1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x205f20: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x205f20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205f24: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x205f24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x205f28: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x205f28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x205f2c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x205F2Cu;
    {
        const bool branch_taken_0x205f2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205f2c) {
            ctx->pc = 0x205F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205F2Cu;
            // 0x205f30: 0x96220162  lhu         $v0, 0x162($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205F4Cu;
            goto label_205f4c;
        }
    }
    ctx->pc = 0x205F34u;
    // 0x205f34: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x205f34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x205f38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x205f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x205f3c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x205f3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x205f40: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x205f40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x205f44: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x205f44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x205f48: 0x96220162  lhu         $v0, 0x162($s1)
    ctx->pc = 0x205f48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 354)));
label_205f4c:
    // 0x205f4c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x205F4Cu;
    {
        const bool branch_taken_0x205f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205f4c) {
            ctx->pc = 0x205F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205F4Cu;
            // 0x205f50: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205F80u;
            goto label_205f80;
        }
    }
    ctx->pc = 0x205F54u;
    // 0x205f54: 0x86220096  lh          $v0, 0x96($s1)
    ctx->pc = 0x205f54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x205f58: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x205f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x205f5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x205f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205f60: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x205f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x205f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205f68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x205f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x205f6c: 0x0  nop
    ctx->pc = 0x205f6cu;
    // NOP
    // 0x205f70: 0x0  nop
    ctx->pc = 0x205f70u;
    // NOP
    // 0x205f74: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x205f74u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x205f78: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x205F78u;
    {
        const bool branch_taken_0x205f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205f78) {
            ctx->pc = 0x205FF8u;
            goto label_205ff8;
        }
    }
    ctx->pc = 0x205F80u;
label_205f80:
    // 0x205f80: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x205f80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x205f84: 0x94820046  lhu         $v0, 0x46($a0)
    ctx->pc = 0x205f84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x205f88: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x205f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x205f8c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x205F8Cu;
    {
        const bool branch_taken_0x205f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205f8c) {
            ctx->pc = 0x205FF0u;
            goto label_205ff0;
        }
    }
    ctx->pc = 0x205F94u;
    // 0x205f94: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x205f94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x205f98: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x205f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x205f9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x205F9Cu;
    {
        const bool branch_taken_0x205f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F9Cu;
        // 0x205fa0: 0x8f829890  lw          $v0, -0x6770($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f9c) {
            ctx->pc = 0x205FC8u;
            goto label_205fc8;
        }
    }
    ctx->pc = 0x205FA4u;
    // 0x205fa4: 0x102c00  sll         $a1, $s0, 16
    ctx->pc = 0x205fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x205fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205fac: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x205facu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x205fb0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x205fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205fb4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x205fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205fb8: 0xc08173a  jal         func_205CE8
    ctx->pc = 0x205FB8u;
    SET_GPR_U32(ctx, 31, 0x205FC0u);
    ctx->pc = 0x205FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205FB8u;
    // 0x205fbc: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205CE8u, 0x205FB8u, 0x205FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205FC0u;
label_205fc0:
    // 0x205fc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x205FC0u;
    {
        const bool branch_taken_0x205fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FC0u;
        // 0x205fc4: 0x9629017c  lhu         $t1, 0x17C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fc0) {
            ctx->pc = 0x205FF0u;
            goto label_205ff0;
        }
    }
    ctx->pc = 0x205FC8u;
label_205fc8:
    // 0x205fc8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x205fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x205fcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x205FCCu;
    {
        const bool branch_taken_0x205fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FCCu;
        // 0x205fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fcc) {
            ctx->pc = 0x205FF8u;
            goto label_205ff8;
        }
    }
    ctx->pc = 0x205FD4u;
    // 0x205fd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x205fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205fd8: 0xc092a94  jal         func_24AA50
    ctx->pc = 0x205FD8u;
    SET_GPR_U32(ctx, 31, 0x205FE0u);
    ctx->pc = 0x205FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205FD8u;
    // 0x205fdc: 0x24067007  addiu       $a2, $zero, 0x7007 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28679));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA50u, 0x205FD8u, 0x205FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205FE0u;
label_205fe0:
    // 0x205fe0: 0xaf809890  sw          $zero, -0x6770($gp)
    ctx->pc = 0x205fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940816), GPR_U32(ctx, 0));
    // 0x205fe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x205FE4u;
    {
        const bool branch_taken_0x205fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FE4u;
        // 0x205fe8: 0x9629017c  lhu         $t1, 0x17C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fe4) {
            ctx->pc = 0x205FF8u;
            goto label_205ff8;
        }
    }
    ctx->pc = 0x205FECu;
    // 0x205fec: 0x0  nop
    ctx->pc = 0x205fecu;
    // NOP
label_205ff0:
    // 0x205ff0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x205ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x205ff4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x205ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_205ff8:
    // 0x205ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205ffc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x205ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206000: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x206000u;
    {
        const bool branch_taken_0x206000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x206000) {
            ctx->pc = 0x206004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206000u;
            // 0x206004: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206020u;
            goto label_206020;
        }
    }
    ctx->pc = 0x206008u;
    // 0x206008: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x206008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20600c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20600cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206010: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x206010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206014: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x206014u;
    {
        const bool branch_taken_0x206014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x206014) {
            ctx->pc = 0x206028u;
            goto label_206028;
        }
    }
    ctx->pc = 0x20601Cu;
    // 0x20601c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x20601cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_206020:
    // 0x206020: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x206020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x206024: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x206024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_206028:
    // 0x206028: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206028u;
    {
        const bool branch_taken_0x206028 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x20602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206028u;
        // 0x20602c: 0x46140501  sub.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206028) {
            ctx->pc = 0x206040u;
            goto label_206040;
        }
    }
    ctx->pc = 0x206030u;
    // 0x206030: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x206030u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206034: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x206034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x206038: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x206038u;
    {
        const bool branch_taken_0x206038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206038u;
        // 0x20603c: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206038) {
            ctx->pc = 0x20605Cu;
            goto label_20605c;
        }
    }
    ctx->pc = 0x206040u;
label_206040:
    // 0x206040: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x206040u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x206044: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x206044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x206048: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x206048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20604c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20604cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206050: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x206050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x206054: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x206054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x206058: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x206058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_20605c:
    // 0x20605c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x20605cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x206060: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x206060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x206064: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x206064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206068: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206068u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20606c: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x20606cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x206070: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x206070u;
    {
        const bool branch_taken_0x206070 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206070u;
        // 0x206074: 0x25230001  addiu       $v1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206070) {
            ctx->pc = 0x206090u;
            goto label_206090;
        }
    }
    ctx->pc = 0x206078u;
    // 0x206078: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x206078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x20607c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x20607cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x206080: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x206084: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x206084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x206088: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x206088u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x20608c: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x20608cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_206090:
    // 0x206090: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x206090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x206094: 0xa623017c  sh          $v1, 0x17C($s1)
    ctx->pc = 0x206094u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 380), (uint16_t)GPR_U32(ctx, 3));
    // 0x206098: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x206098u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x20609c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2060a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2060a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2060a4: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x2060a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x2060a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2060a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2060ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2060acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2060b0: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x2060b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
    // 0x2060b4: 0x8e86006c  lw          $a2, 0x6C($s4)
    ctx->pc = 0x2060b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x2060b8: 0x9623003c  lhu         $v1, 0x3C($s1)
    ctx->pc = 0x2060b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2060bc: 0xacd00020  sw          $s0, 0x20($a2)
    ctx->pc = 0x2060bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 16));
    // 0x2060c0: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x2060c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x2060c4: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x2060c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2060c8: 0xa0c70030  sb          $a3, 0x30($a2)
    ctx->pc = 0x2060c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 48), (uint8_t)GPR_U32(ctx, 7));
    // 0x2060cc: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x2060ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x2060d0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2060d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2060d4: 0xa0c70031  sb          $a3, 0x31($a2)
    ctx->pc = 0x2060d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 49), (uint8_t)GPR_U32(ctx, 7));
    // 0x2060d8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2060d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x2060dc: 0xc09db70  jal         func_276DC0
    ctx->pc = 0x2060DCu;
    SET_GPR_U32(ctx, 31, 0x2060E4u);
    ctx->pc = 0x2060E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060DCu;
    // 0x2060e0: 0xa636017e  sh          $s6, 0x17E($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 382), (uint16_t)GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276DC0u, 0x2060DCu, 0x2060E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060E4u;
label_2060e4:
    // 0x2060e4: 0x8622017c  lh          $v0, 0x17C($s1)
    ctx->pc = 0x2060e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x2060e8: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x2060e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2060ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2060ECu;
    {
        const bool branch_taken_0x2060ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2060F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060ECu;
        // 0x2060f0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060ec) {
            ctx->pc = 0x206100u;
            goto label_206100;
        }
    }
    ctx->pc = 0x2060F4u;
    // 0x2060f4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2060f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2060f8: 0xa622017c  sh          $v0, 0x17C($s1)
    ctx->pc = 0x2060f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 380), (uint16_t)GPR_U32(ctx, 2));
label_2060fc:
    // 0x2060fc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2060fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_206100:
    // 0x206100: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x206100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206104: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x206104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206108: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x206108u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20610c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x20610cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206110: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x206110u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x206114: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x206114u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x206118: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x206118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20611c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x20611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x206120: 0x3e00008  jr          $ra
    ctx->pc = 0x206120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206120u;
        // 0x206124: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206128u;
}
