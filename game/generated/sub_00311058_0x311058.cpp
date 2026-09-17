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

// Function: sub_00311058
// Address: 0x311058 - 0x3117a0
void sub_00311058_0x311058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311058_0x311058");
#endif

    switch (ctx->pc) {
        case 0x311138u: goto label_311138;
        case 0x311140u: goto label_311140;
        case 0x31115cu: goto label_31115c;
        case 0x311180u: goto label_311180;
        case 0x3111d0u: goto label_3111d0;
        case 0x31121cu: goto label_31121c;
        case 0x31124cu: goto label_31124c;
        case 0x311274u: goto label_311274;
        case 0x3112acu: goto label_3112ac;
        case 0x3112dcu: goto label_3112dc;
        case 0x3112f0u: goto label_3112f0;
        case 0x3112fcu: goto label_3112fc;
        case 0x311310u: goto label_311310;
        case 0x311338u: goto label_311338;
        case 0x311344u: goto label_311344;
        case 0x311358u: goto label_311358;
        case 0x31136cu: goto label_31136c;
        case 0x311454u: goto label_311454;
        case 0x311490u: goto label_311490;
        case 0x3114b0u: goto label_3114b0;
        case 0x31150cu: goto label_31150c;
        case 0x311570u: goto label_311570;
        case 0x31157cu: goto label_31157c;
        case 0x311590u: goto label_311590;
        case 0x3115a8u: goto label_3115a8;
        case 0x3115e0u: goto label_3115e0;
        case 0x3115e8u: goto label_3115e8;
        case 0x31160cu: goto label_31160c;
        case 0x311620u: goto label_311620;
        case 0x311680u: goto label_311680;
        case 0x3116b8u: goto label_3116b8;
        case 0x3116ccu: goto label_3116cc;
        case 0x3116d4u: goto label_3116d4;
        case 0x3116ecu: goto label_3116ec;
        case 0x311730u: goto label_311730;
        case 0x311738u: goto label_311738;
        case 0x311770u: goto label_311770;
        case 0x311780u: goto label_311780;
        default: break;
    }

    ctx->pc = 0x311058u;

    // 0x311058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x311058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31105c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x31105cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x311064: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x311064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x311068: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x311068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31106c: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x31106cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x311070: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x311070u;
    {
        const bool branch_taken_0x311070 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x311074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311070u;
        // 0x311074: 0x28a20003  slti        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311070) {
            ctx->pc = 0x3110B0u;
            goto label_3110b0;
        }
    }
    ctx->pc = 0x311078u;
    // 0x311078: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x311078u;
    {
        const bool branch_taken_0x311078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311078u;
        // 0x31107c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311078) {
            ctx->pc = 0x311098u;
            goto label_311098;
        }
    }
    ctx->pc = 0x311080u;
    // 0x311080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311084: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x311084u;
    {
        const bool branch_taken_0x311084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x311088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311084u;
        // 0x311088: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311084) {
            ctx->pc = 0x3110A8u;
            goto label_3110a8;
        }
    }
    ctx->pc = 0x31108Cu;
    // 0x31108c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31108Cu;
    {
        const bool branch_taken_0x31108c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31108Cu;
        // 0x311090: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31108c) {
            ctx->pc = 0x3110C8u;
            goto label_3110c8;
        }
    }
    ctx->pc = 0x311094u;
    // 0x311094: 0x0  nop
    ctx->pc = 0x311094u;
    // NOP
label_311098:
    // 0x311098: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x311098u;
    {
        const bool branch_taken_0x311098 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x31109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311098u;
        // 0x31109c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311098) {
            ctx->pc = 0x3110C0u;
            goto label_3110c0;
        }
    }
    ctx->pc = 0x3110A0u;
    // 0x3110a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3110A0u;
    {
        const bool branch_taken_0x3110a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3110A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110A0u;
        // 0x3110a4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3110a0) {
            ctx->pc = 0x3110C8u;
            goto label_3110c8;
        }
    }
    ctx->pc = 0x3110A8u;
label_3110a8:
    // 0x3110a8: 0x80c4434  j           func_3110D0
    ctx->pc = 0x3110A8u;
    ctx->pc = 0x3110ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3110A8u;
    // 0x3110ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3110D0u;
    goto label_3110d0;
    ctx->pc = 0x3110B0u;
label_3110b0:
    // 0x3110b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3110b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3110b4: 0x80c44ea  j           func_3113A8
    ctx->pc = 0x3110B4u;
    ctx->pc = 0x3110B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3110B4u;
    // 0x3110b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3113A8u;
    goto label_3113a8;
    ctx->pc = 0x3110BCu;
    // 0x3110bc: 0x0  nop
    ctx->pc = 0x3110bcu;
    // NOP
label_3110c0:
    // 0x3110c0: 0x80c4592  j           func_311648
    ctx->pc = 0x3110C0u;
    ctx->pc = 0x3110C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3110C0u;
    // 0x3110c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311648u;
    goto label_311648;
    ctx->pc = 0x3110C8u;
label_3110c8:
    // 0x3110c8: 0x80c4592  j           func_311648
    ctx->pc = 0x3110C8u;
    ctx->pc = 0x3110CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3110C8u;
    // 0x3110cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311648u;
    goto label_311648;
    ctx->pc = 0x3110D0u;
label_3110d0:
    // 0x3110d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3110d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3110d4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3110d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3110d8: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x3110d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x3110dc: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x3110dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x3110e0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x3110e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x3110e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3110e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3110e8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x3110e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x3110ec: 0x2672f6d0  addiu       $s2, $s3, -0x930
    ctx->pc = 0x3110ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964944));
    // 0x3110f0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x3110f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x3110f4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x3110f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x3110f8: 0xe7b900a8  swc1        $f25, 0xA8($sp)
    ctx->pc = 0x3110f8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3110fc: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x3110fcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x311100: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x311100u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x311104: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x311104u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x311108: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x311108u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x31110c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x31110cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x311110: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x311110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x311114: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x311114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311118: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x311118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF6D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF6D0u, _value); } while (0); }
    // 0x31111c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x31111cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311120: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x311120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF6D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF6D4u, _value); } while (0); }
    // 0x311124: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x311124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311128: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x311128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF6D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF6D8u, _value); } while (0); }
    // 0x31112c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31112cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x311130: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x311130u;
    SET_GPR_U32(ctx, 31, 0x311138u);
    ctx->pc = 0x311134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311130u;
    // 0x311134: 0xc4570004  lwc1        $f23, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x311130u, 0x311138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311138u;
label_311138:
    // 0x311138: 0xc0caf20  jal         func_32BC80
    ctx->pc = 0x311138u;
    SET_GPR_U32(ctx, 31, 0x311140u);
    ctx->pc = 0x31113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311138u;
    // 0x31113c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BC80u, 0x311138u, 0x311140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311140u;
label_311140:
    // 0x311140: 0xdbbc0000  lqc2        $vf28, 0x0($sp)
    ctx->pc = 0x311140u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311144: 0xdbbd0010  lqc2        $vf29, 0x10($sp)
    ctx->pc = 0x311144u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311148: 0xdbbe0020  lqc2        $vf30, 0x20($sp)
    ctx->pc = 0x311148u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31114c: 0xdbbf0030  lqc2        $vf31, 0x30($sp)
    ctx->pc = 0x31114cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311154: 0xc0cbac2  jal         func_32EB08
    ctx->pc = 0x311154u;
    SET_GPR_U32(ctx, 31, 0x31115Cu);
    ctx->pc = 0x311158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311154u;
    // 0x311158: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB08u, 0x311154u, 0x31115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31115Cu;
label_31115c:
    // 0x31115c: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x31115cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x311160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x311160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311164: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x311164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311168: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x311168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x31116c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x31116cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311170: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x311170u;
    {
        const bool branch_taken_0x311170 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311170) {
            ctx->pc = 0x311174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311170u;
            // 0x311174: 0xc6420000  lwc1        $f2, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x311188u;
            goto label_311188;
        }
    }
    ctx->pc = 0x311178u;
    // 0x311178: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x311178u;
    SET_GPR_U32(ctx, 31, 0x311180u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x311178u, 0x311180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311180u;
label_311180:
    // 0x311180: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x311180u;
    {
        const bool branch_taken_0x311180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311180u;
        // 0x311184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311180) {
            ctx->pc = 0x31136Cu;
            goto label_31136c;
        }
    }
    ctx->pc = 0x311188u;
label_311188:
    // 0x311188: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x311188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31118c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31118cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311190: 0x0  nop
    ctx->pc = 0x311190u;
    // NOP
    // 0x311194: 0x0  nop
    ctx->pc = 0x311194u;
    // NOP
    // 0x311198: 0x46031503  div.s       $f20, $f2, $f3
    ctx->pc = 0x311198u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[20] = ctx->f[2] / ctx->f[3];
    // 0x31119c: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x31119cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x3111a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3111a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3111a4: 0x0  nop
    ctx->pc = 0x3111a4u;
    // NOP
    // 0x3111a8: 0x0  nop
    ctx->pc = 0x3111a8u;
    // NOP
    // 0x3111ac: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3111acu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x3111b0: 0x0  nop
    ctx->pc = 0x3111b0u;
    // NOP
    // 0x3111b4: 0x0  nop
    ctx->pc = 0x3111b4u;
    // NOP
    // 0x3111b8: 0x460c0584  c1          0xC0584
    ctx->pc = 0x3111b8u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
    // 0x3111bc: 0x4616b032  c.eq.s      $f22, $f22
    ctx->pc = 0x3111bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3111c0: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x3111C0u;
    {
        const bool branch_taken_0x3111c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3111c0) {
            ctx->pc = 0x3111C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3111C0u;
            // 0x3111c4: 0xc6400004  lwc1        $f0, 0x4($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3111E0u;
            goto label_3111e0;
        }
    }
    ctx->pc = 0x3111C8u;
    // 0x3111c8: 0xc04754c  jal         func_11D530
    ctx->pc = 0x3111C8u;
    SET_GPR_U32(ctx, 31, 0x3111D0u);
    ctx->pc = 0x11D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D530u, 0x3111C8u, 0x3111D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3111D0u;
label_3111d0:
    // 0x3111d0: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x3111d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3111d4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x3111d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3111d8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3111d8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x3111dc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3111dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3111e0:
    // 0x3111e0: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x3111e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3111e4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x3111e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x3111e8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3111e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3111ec: 0x4600b087  neg.s       $f2, $f22
    ctx->pc = 0x3111ecu;
    ctx->f[2] = FPU_NEG_S(ctx->f[22]);
    // 0x3111f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3111f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3111f4: 0x46141642  mul.s       $f25, $f2, $f20
    ctx->pc = 0x3111f4u;
    ctx->f[25] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3111f8: 0x46030d00  add.s       $f20, $f1, $f3
    ctx->pc = 0x3111f8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3111fc: 0x0  nop
    ctx->pc = 0x3111fcu;
    // NOP
    // 0x311200: 0x0  nop
    ctx->pc = 0x311200u;
    // NOP
    // 0x311204: 0x46140544  c1          0x140544
    ctx->pc = 0x311204u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x311208: 0x4615a832  c.eq.s      $f21, $f21
    ctx->pc = 0x311208u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31120c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x31120Cu;
    {
        const bool branch_taken_0x31120c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31120c) {
            ctx->pc = 0x311210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31120Cu;
            // 0x311210: 0x4617b802  mul.s       $f0, $f23, $f23 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x311224u;
            goto label_311224;
        }
    }
    ctx->pc = 0x311214u;
    // 0x311214: 0xc04754c  jal         func_11D530
    ctx->pc = 0x311214u;
    SET_GPR_U32(ctx, 31, 0x31121Cu);
    ctx->pc = 0x311218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311214u;
    // 0x311218: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D530u, 0x311214u, 0x31121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31121Cu;
label_31121c:
    // 0x31121c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x31121cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x311220: 0x4617b802  mul.s       $f0, $f23, $f23
    ctx->pc = 0x311220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
label_311224:
    // 0x311224: 0x4617ae01  sub.s       $f24, $f21, $f23
    ctx->pc = 0x311224u;
    ctx->f[24] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    // 0x311228: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x311228u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x31122c: 0x0  nop
    ctx->pc = 0x31122cu;
    // NOP
    // 0x311230: 0x0  nop
    ctx->pc = 0x311230u;
    // NOP
    // 0x311234: 0x460c0004  c1          0xC0004
    ctx->pc = 0x311234u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x311238: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x311238u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31123c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x31123Cu;
    {
        const bool branch_taken_0x31123c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x311240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31123Cu;
        // 0x311240: 0x4617c502  mul.s       $f20, $f24, $f23 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31123c) {
            ctx->pc = 0x31124Cu;
            goto label_31124c;
        }
    }
    ctx->pc = 0x311244u;
    // 0x311244: 0xc04754c  jal         func_11D530
    ctx->pc = 0x311244u;
    SET_GPR_U32(ctx, 31, 0x31124Cu);
    ctx->pc = 0x11D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D530u, 0x311244u, 0x31124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31124Cu;
label_31124c:
    // 0x31124c: 0x0  nop
    ctx->pc = 0x31124cu;
    // NOP
    // 0x311250: 0x0  nop
    ctx->pc = 0x311250u;
    // NOP
    // 0x311254: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x311254u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x311258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31125c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31125cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311260: 0x0  nop
    ctx->pc = 0x311260u;
    // NOP
    // 0x311264: 0x0  nop
    ctx->pc = 0x311264u;
    // NOP
    // 0x311268: 0x4615c303  div.s       $f12, $f24, $f21
    ctx->pc = 0x311268u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[24] * 0.0f); } else ctx->f[12] = ctx->f[24] / ctx->f[21];
    // 0x31126c: 0xc0cba96  jal         func_32EA58
    ctx->pc = 0x31126Cu;
    SET_GPR_U32(ctx, 31, 0x311274u);
    ctx->pc = 0x311270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31126Cu;
    // 0x311270: 0x2670f6d0  addiu       $s0, $s3, -0x930 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA58u, 0x31126Cu, 0x311274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311274u;
label_311274:
    // 0x311274: 0x4614b0c2  mul.s       $f3, $f22, $f20
    ctx->pc = 0x311274u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x311278: 0x4614cd02  mul.s       $f20, $f25, $f20
    ctx->pc = 0x311278u;
    ctx->f[20] = FPU_MUL_S(ctx->f[25], ctx->f[20]);
    // 0x31127c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x31127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311280: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x311280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311284: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x311284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x311288: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x311288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31128c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31128cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311290: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x311290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x311294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311298: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x311298u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x31129c: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x31129cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x3112a0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3112a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x3112a4: 0xc0cbaa2  jal         func_32EA88
    ctx->pc = 0x3112A4u;
    SET_GPR_U32(ctx, 31, 0x3112ACu);
    ctx->pc = 0x3112A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3112A4u;
    // 0x3112a8: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA88u, 0x3112A4u, 0x3112ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112ACu;
label_3112ac:
    // 0x3112ac: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x3112acu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3112b0: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x3112b0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3112b4: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x3112b4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3112b8: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x3112b8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3112bc: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x3112bcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3112c0: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x3112c0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3112c4: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x3112c4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3112c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3112c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3112cc: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x3112ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3112d0: 0x24050889  addiu       $a1, $zero, 0x889
    ctx->pc = 0x3112d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2185));
    // 0x3112d4: 0xc0cb7ec  jal         func_32DFB0
    ctx->pc = 0x3112D4u;
    SET_GPR_U32(ctx, 31, 0x3112DCu);
    ctx->pc = 0x3112D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3112D4u;
    // 0x3112d8: 0x26100174  addiu       $s0, $s0, 0x174 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DFB0u, 0x3112D4u, 0x3112DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112DCu;
label_3112dc:
    // 0x3112dc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3112dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3112e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3112E0u;
    {
        const bool branch_taken_0x3112e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3112e0) {
            ctx->pc = 0x311308u;
            goto label_311308;
        }
    }
    ctx->pc = 0x3112E8u;
    // 0x3112e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3112e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3112ec: 0x0  nop
    ctx->pc = 0x3112ecu;
    // NOP
label_3112f0:
    // 0x3112f0: 0x2625fff4  addiu       $a1, $s1, -0xC
    ctx->pc = 0x3112f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    // 0x3112f4: 0xc0cbac2  jal         func_32EB08
    ctx->pc = 0x3112F4u;
    SET_GPR_U32(ctx, 31, 0x3112FCu);
    ctx->pc = 0x3112F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3112F4u;
    // 0x3112f8: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB08u, 0x3112F4u, 0x3112FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112FCu;
label_3112fc:
    // 0x3112fc: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x3112fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x311300: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x311300u;
    {
        const bool branch_taken_0x311300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x311300) {
            ctx->pc = 0x311304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311300u;
            // 0x311304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3112F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3112f0;
        }
    }
    ctx->pc = 0x311308u;
label_311308:
    // 0x311308: 0xc0cc1c2  jal         func_330708
    ctx->pc = 0x311308u;
    SET_GPR_U32(ctx, 31, 0x311310u);
    ctx->pc = 0x31130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311308u;
    // 0x31130c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330708u, 0x311308u, 0x311310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311310u;
label_311310:
    // 0x311310: 0xdbbc0000  lqc2        $vf28, 0x0($sp)
    ctx->pc = 0x311310u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311314: 0xdbbd0010  lqc2        $vf29, 0x10($sp)
    ctx->pc = 0x311314u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311318: 0xdbbe0020  lqc2        $vf30, 0x20($sp)
    ctx->pc = 0x311318u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31131c: 0xdbbf0030  lqc2        $vf31, 0x30($sp)
    ctx->pc = 0x31131cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311320: 0x2671f6d0  addiu       $s1, $s3, -0x930
    ctx->pc = 0x311320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964944));
    // 0x311324: 0x26230174  addiu       $v1, $s1, 0x174
    ctx->pc = 0x311324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x311328: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x311328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31132c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31132Cu;
    {
        const bool branch_taken_0x31132c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31132Cu;
        // 0x311330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31132c) {
            ctx->pc = 0x311350u;
            goto label_311350;
        }
    }
    ctx->pc = 0x311334u;
    // 0x311334: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x311334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_311338:
    // 0x311338: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x311338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31133c: 0xc0cbac2  jal         func_32EB08
    ctx->pc = 0x31133Cu;
    SET_GPR_U32(ctx, 31, 0x311344u);
    ctx->pc = 0x311340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31133Cu;
    // 0x311340: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB08u, 0x31133Cu, 0x311344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311344u;
label_311344:
    // 0x311344: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x311344u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x311348: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x311348u;
    {
        const bool branch_taken_0x311348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311348u;
        // 0x31134c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311348) {
            ctx->pc = 0x311338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311338;
        }
    }
    ctx->pc = 0x311350u;
label_311350:
    // 0x311350: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x311350u;
    SET_GPR_U32(ctx, 31, 0x311358u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x311350u, 0x311358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311358u;
label_311358:
    // 0x311358: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x311358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x31135c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31135cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311360: 0x24a5f6dc  addiu       $a1, $a1, -0x924
    ctx->pc = 0x311360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964956));
    // 0x311364: 0xc0c45e8  jal         func_3117A0
    ctx->pc = 0x311364u;
    SET_GPR_U32(ctx, 31, 0x31136Cu);
    ctx->pc = 0x311368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311364u;
    // 0x311368: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3117A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3117A0u, 0x311364u, 0x31136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31136Cu;
label_31136c:
    // 0x31136c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x31136cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x311370: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x311370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x311374: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x311374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x311378: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x311378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31137c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x31137cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x311380: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x311380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x311384: 0xc7b900a8  lwc1        $f25, 0xA8($sp)
    ctx->pc = 0x311384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x311388: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x311388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x31138c: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x31138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x311390: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x311390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x311394: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x311394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x311398: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x311398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31139c: 0x3e00008  jr          $ra
    ctx->pc = 0x31139Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3113A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31139Cu;
        // 0x3113a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31139Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3113A4u;
    // 0x3113a4: 0x0  nop
    ctx->pc = 0x3113a4u;
    // NOP
label_3113a8:
    // 0x3113a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3113a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3113ac: 0xc78295bc  lwc1        $f2, -0x6A44($gp)
    ctx->pc = 0x3113acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3113b0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x3113b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x3113b4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3113b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3113b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3113b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3113bc: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x3113bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x3113c0: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x3113c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x3113c4: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3113c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3113c8: 0x2670f6d0  addiu       $s0, $s3, -0x930
    ctx->pc = 0x3113c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964944));
    // 0x3113cc: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x3113ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x3113d0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3113d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3113d4: 0xe7b60088  swc1        $f22, 0x88($sp)
    ctx->pc = 0x3113d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3113d8: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x3113d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3113dc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3113dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3113e0: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x3113e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3113e4: 0xe6050000  swc1        $f5, 0x0($s0)
    ctx->pc = 0x3113e4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF6D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF6D0u, _value); } while (0); }
    // 0x3113e8: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x3113e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3113ec: 0xe6040004  swc1        $f4, 0x4($s0)
    ctx->pc = 0x3113ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF6D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF6D4u, _value); } while (0); }
    // 0x3113f0: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x3113f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3113f4: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x3113f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF6D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF6D8u, _value); } while (0); }
    // 0x3113f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3113f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3113fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3113fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311400: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x311400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x311404: 0x46000d47  neg.s       $f21, $f1
    ctx->pc = 0x311404u;
    ctx->f[21] = FPU_NEG_S(ctx->f[1]);
    // 0x311408: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x311408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31140c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x31140cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x311410: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x311410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x311414: 0xc454000c  lwc1        $f20, 0xC($v0)
    ctx->pc = 0x311414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x311418: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x311418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x31141c: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x31141cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x311420: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x311420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x311424: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x311424u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x311428: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x311428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31142c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x31142Cu;
    {
        const bool branch_taken_0x31142c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x311430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31142Cu;
        // 0x311430: 0xc4560004  lwc1        $f22, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31142c) {
            ctx->pc = 0x311498u;
            goto label_311498;
        }
    }
    ctx->pc = 0x311434u;
    // 0x311434: 0x0  nop
    ctx->pc = 0x311434u;
    // NOP
    // 0x311438: 0x0  nop
    ctx->pc = 0x311438u;
    // NOP
    // 0x31143c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x31143cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x311440: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x311440u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311444: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x311444u;
    {
        const bool branch_taken_0x311444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311444) {
            ctx->pc = 0x311454u;
            goto label_311454;
        }
    }
    ctx->pc = 0x31144Cu;
    // 0x31144c: 0xc04754c  jal         func_11D530
    ctx->pc = 0x31144Cu;
    SET_GPR_U32(ctx, 31, 0x311454u);
    ctx->pc = 0x11D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D530u, 0x31144Cu, 0x311454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311454u;
label_311454:
    // 0x311454: 0x0  nop
    ctx->pc = 0x311454u;
    // NOP
    // 0x311458: 0x0  nop
    ctx->pc = 0x311458u;
    // NOP
    // 0x31145c: 0x4600b043  div.s       $f1, $f22, $f0
    ctx->pc = 0x31145cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[1] = ctx->f[22] / ctx->f[0];
    // 0x311460: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x311460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311464: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x311464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x311468: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x311468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31146c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x31146cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x311470: 0x4601a8c2  mul.s       $f3, $f21, $f1
    ctx->pc = 0x311470u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x311474: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x311474u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x311478: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x311478u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x31147c: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x31147cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x311480: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x311480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x311484: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x311484u;
    {
        const bool branch_taken_0x311484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311484u;
        // 0x311488: 0xe604000c  swc1        $f4, 0xC($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311484) {
            ctx->pc = 0x3114A8u;
            goto label_3114a8;
        }
    }
    ctx->pc = 0x31148Cu;
    // 0x31148c: 0x0  nop
    ctx->pc = 0x31148cu;
    // NOP
label_311490:
    // 0x311490: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x311490u;
    {
        const bool branch_taken_0x311490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311490u;
        // 0x311494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311490) {
            ctx->pc = 0x311620u;
            goto label_311620;
        }
    }
    ctx->pc = 0x311498u;
label_311498:
    // 0x311498: 0x46162800  add.s       $f0, $f5, $f22
    ctx->pc = 0x311498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[22]);
    // 0x31149c: 0xe6040010  swc1        $f4, 0x10($s0)
    ctx->pc = 0x31149cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x3114a0: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x3114a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x3114a4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3114a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3114a8:
    // 0x3114a8: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x3114A8u;
    SET_GPR_U32(ctx, 31, 0x3114B0u);
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x3114A8u, 0x3114B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3114B0u;
label_3114b0:
    // 0x3114b0: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x3114b0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3114b4: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x3114b4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3114b8: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x3114b8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3114bc: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x3114bcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3114c0: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x3114c0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3114c4: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x3114c4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3114c8: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x3114c8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3114cc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x3114ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3114d0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3114d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3114d4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3114d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3114d8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3114d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3114dc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3114dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3114e0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3114e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3114e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3114e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3114e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3114e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3114ec: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x3114ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3114f0: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x3114f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3114f4: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x3114f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3114f8: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x3114f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3114fc: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x3114fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x311500: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x311500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x311504: 0xc0cb7ec  jal         func_32DFB0
    ctx->pc = 0x311504u;
    SET_GPR_U32(ctx, 31, 0x31150Cu);
    ctx->pc = 0x311508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311504u;
    // 0x311508: 0x24050889  addiu       $a1, $zero, 0x889 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2185));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DFB0u, 0x311504u, 0x31150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31150Cu;
label_31150c:
    // 0x31150c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x31150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311510: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x311510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311514: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x311514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311518: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x311518u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x31151c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x31151cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x311520: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x311520u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x311524: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x311524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x311528: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x311528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31152c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31152cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x311530: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x311530u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x311534: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x311534u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x311538: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x311538u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x31153c: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x31153cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x311540: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x311540u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x311544: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x311544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x311548: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x311548u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x31154c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x31154cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x311550: 0x2450f6e8  addiu       $s0, $v0, -0x918
    ctx->pc = 0x311550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964968));
    // 0x311554: 0x2603015c  addiu       $v1, $s0, 0x15C
    ctx->pc = 0x311554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x311558: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x311558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31155c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31155Cu;
    {
        const bool branch_taken_0x31155c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31155c) {
            ctx->pc = 0x311588u;
            goto label_311588;
        }
    }
    ctx->pc = 0x311564u;
    // 0x311564: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x311564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x311568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31156c: 0x0  nop
    ctx->pc = 0x31156cu;
    // NOP
label_311570:
    // 0x311570: 0x2605fff4  addiu       $a1, $s0, -0xC
    ctx->pc = 0x311570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x311574: 0xc0cbac2  jal         func_32EB08
    ctx->pc = 0x311574u;
    SET_GPR_U32(ctx, 31, 0x31157Cu);
    ctx->pc = 0x311578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311574u;
    // 0x311578: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB08u, 0x311574u, 0x31157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31157Cu;
label_31157c:
    // 0x31157c: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x31157cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x311580: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x311580u;
    {
        const bool branch_taken_0x311580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x311580) {
            ctx->pc = 0x311584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311580u;
            // 0x311584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311570;
        }
    }
    ctx->pc = 0x311588u;
label_311588:
    // 0x311588: 0xc0cc1c2  jal         func_330708
    ctx->pc = 0x311588u;
    SET_GPR_U32(ctx, 31, 0x311590u);
    ctx->pc = 0x31158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311588u;
    // 0x31158c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330708u, 0x311588u, 0x311590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311590u;
label_311590:
    // 0x311590: 0xdbbc0000  lqc2        $vf28, 0x0($sp)
    ctx->pc = 0x311590u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311594: 0xdbbd0010  lqc2        $vf29, 0x10($sp)
    ctx->pc = 0x311594u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311598: 0xdbbe0020  lqc2        $vf30, 0x20($sp)
    ctx->pc = 0x311598u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31159c: 0xdbbf0030  lqc2        $vf31, 0x30($sp)
    ctx->pc = 0x31159cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3115a0: 0xc0caf20  jal         func_32BC80
    ctx->pc = 0x3115A0u;
    SET_GPR_U32(ctx, 31, 0x3115A8u);
    ctx->pc = 0x3115A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3115A0u;
    // 0x3115a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BC80u, 0x3115A0u, 0x3115A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3115A8u;
label_3115a8:
    // 0x3115a8: 0xdbb80000  lqc2        $vf24, 0x0($sp)
    ctx->pc = 0x3115a8u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3115ac: 0xdbb90010  lqc2        $vf25, 0x10($sp)
    ctx->pc = 0x3115acu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3115b0: 0xdbba0020  lqc2        $vf26, 0x20($sp)
    ctx->pc = 0x3115b0u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3115b4: 0xdbbb0030  lqc2        $vf27, 0x30($sp)
    ctx->pc = 0x3115b4u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3115b8: 0x4a006038  vcallms     0xC00
    ctx->pc = 0x3115b8u;
    {     ctx->vu0_tpc = 0xC00;     runtime->executeVU0Microprogram(rdram, ctx, 0xC00); }
    // 0x3115bc: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x3115bcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3115c0: 0x2670f6d0  addiu       $s0, $s3, -0x930
    ctx->pc = 0x3115c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964944));
    // 0x3115c4: 0x26030174  addiu       $v1, $s0, 0x174
    ctx->pc = 0x3115c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 372));
    // 0x3115c8: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x3115c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3115cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3115CCu;
    {
        const bool branch_taken_0x3115cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3115D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115CCu;
        // 0x3115d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115cc) {
            ctx->pc = 0x311604u;
            goto label_311604;
        }
    }
    ctx->pc = 0x3115D4u;
    // 0x3115d4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3115d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3115d8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x3115d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3115dc: 0x0  nop
    ctx->pc = 0x3115dcu;
    // NOP
label_3115e0:
    // 0x3115e0: 0xc0cbac2  jal         func_32EB08
    ctx->pc = 0x3115E0u;
    SET_GPR_U32(ctx, 31, 0x3115E8u);
    ctx->pc = 0x3115E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3115E0u;
    // 0x3115e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB08u, 0x3115E0u, 0x3115E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3115E8u;
label_3115e8:
    // 0x3115e8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3115e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3115ec: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x3115ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3115f0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3115f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3115f4: 0x4501ffa6  bc1t        . + 4 + (-0x5A << 2)
    ctx->pc = 0x3115F4u;
    {
        const bool branch_taken_0x3115f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3115F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115F4u;
        // 0x3115f8: 0x211102b  sltu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115f4) {
            ctx->pc = 0x311490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311490;
        }
    }
    ctx->pc = 0x3115FCu;
    // 0x3115fc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3115FCu;
    {
        const bool branch_taken_0x3115fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115FCu;
        // 0x311600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115fc) {
            ctx->pc = 0x3115E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3115e0;
        }
    }
    ctx->pc = 0x311604u;
label_311604:
    // 0x311604: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x311604u;
    SET_GPR_U32(ctx, 31, 0x31160Cu);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x311604u, 0x31160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31160Cu;
label_31160c:
    // 0x31160c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x31160cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x311610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311614: 0x24a5f6dc  addiu       $a1, $a1, -0x924
    ctx->pc = 0x311614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964956));
    // 0x311618: 0xc0c45e8  jal         func_3117A0
    ctx->pc = 0x311618u;
    SET_GPR_U32(ctx, 31, 0x311620u);
    ctx->pc = 0x31161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311618u;
    // 0x31161c: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3117A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3117A0u, 0x311618u, 0x311620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311620u;
label_311620:
    // 0x311620: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x311620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x311624: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x311624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x311628: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x311628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31162c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x31162cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x311630: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x311630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x311634: 0xc7b60088  lwc1        $f22, 0x88($sp)
    ctx->pc = 0x311634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x311638: 0xc7b50080  lwc1        $f21, 0x80($sp)
    ctx->pc = 0x311638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31163c: 0xc7b40078  lwc1        $f20, 0x78($sp)
    ctx->pc = 0x31163cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x311640: 0x3e00008  jr          $ra
    ctx->pc = 0x311640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311640u;
        // 0x311644: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311648u;
label_311648:
    // 0x311648: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x311648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31164c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31164cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311650: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x311650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x311654: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x311654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311658: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x311658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x31165c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x31165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x311660: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x311660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x311664: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x311664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x311668: 0xe7b40068  swc1        $f20, 0x68($sp)
    ctx->pc = 0x311668u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31166c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x31166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x311670: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x311670u;
    {
        const bool branch_taken_0x311670 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x311674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311670u;
        // 0x311674: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311670) {
            ctx->pc = 0x3116C0u;
            goto label_3116c0;
        }
    }
    ctx->pc = 0x311678u;
    // 0x311678: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x311678u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x31167c: 0x2664f6d0  addiu       $a0, $s3, -0x930
    ctx->pc = 0x31167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964944));
label_311680:
    // 0x311680: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x311680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311684: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x311684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x311688: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x311688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x31168c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x31168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311690: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x311690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x311694: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x311694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311698: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x311698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x31169c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x31169cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x3116a0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3116a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3116a4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3116a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3116a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3116A8u;
    {
        const bool branch_taken_0x3116a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3116ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116A8u;
        // 0x3116ac: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116a8) {
            ctx->pc = 0x311680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311680;
        }
    }
    ctx->pc = 0x3116B0u;
    // 0x3116b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3116B0u;
    {
        const bool branch_taken_0x3116b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3116b0) {
            ctx->pc = 0x3116C4u;
            goto label_3116c4;
        }
    }
    ctx->pc = 0x3116B8u;
label_3116b8:
    // 0x3116b8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3116B8u;
    {
        const bool branch_taken_0x3116b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3116BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116B8u;
        // 0x3116bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116b8) {
            ctx->pc = 0x311780u;
            goto label_311780;
        }
    }
    ctx->pc = 0x3116C0u;
label_3116c0:
    // 0x3116c0: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x3116c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
label_3116c4:
    // 0x3116c4: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x3116C4u;
    SET_GPR_U32(ctx, 31, 0x3116CCu);
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x3116C4u, 0x3116CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3116CCu;
label_3116cc:
    // 0x3116cc: 0xc0cc1c2  jal         func_330708
    ctx->pc = 0x3116CCu;
    SET_GPR_U32(ctx, 31, 0x3116D4u);
    ctx->pc = 0x3116D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3116CCu;
    // 0x3116d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330708u, 0x3116CCu, 0x3116D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3116D4u;
label_3116d4:
    // 0x3116d4: 0xdbbc0000  lqc2        $vf28, 0x0($sp)
    ctx->pc = 0x3116d4u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3116d8: 0xdbbd0010  lqc2        $vf29, 0x10($sp)
    ctx->pc = 0x3116d8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3116dc: 0xdbbe0020  lqc2        $vf30, 0x20($sp)
    ctx->pc = 0x3116dcu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3116e0: 0xdbbf0030  lqc2        $vf31, 0x30($sp)
    ctx->pc = 0x3116e0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3116e4: 0xc0caf20  jal         func_32BC80
    ctx->pc = 0x3116E4u;
    SET_GPR_U32(ctx, 31, 0x3116ECu);
    ctx->pc = 0x3116E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3116E4u;
    // 0x3116e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BC80u, 0x3116E4u, 0x3116ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3116ECu;
label_3116ec:
    // 0x3116ec: 0xdbb80000  lqc2        $vf24, 0x0($sp)
    ctx->pc = 0x3116ecu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3116f0: 0xdbb90010  lqc2        $vf25, 0x10($sp)
    ctx->pc = 0x3116f0u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3116f4: 0xdbba0020  lqc2        $vf26, 0x20($sp)
    ctx->pc = 0x3116f4u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3116f8: 0xdbbb0030  lqc2        $vf27, 0x30($sp)
    ctx->pc = 0x3116f8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3116fc: 0x4a006038  vcallms     0xC00
    ctx->pc = 0x3116fcu;
    {     ctx->vu0_tpc = 0xC00;     runtime->executeVU0Microprogram(rdram, ctx, 0xC00); }
    // 0x311700: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x311700u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x311704: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x311704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x311708: 0x2670f6d0  addiu       $s0, $s3, -0x930
    ctx->pc = 0x311708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964944));
    // 0x31170c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31170cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x311710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311714: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x311714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x311718: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x311718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31171c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x31171cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x311720: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x311720u;
    {
        const bool branch_taken_0x311720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311720u;
        // 0x311724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311720) {
            ctx->pc = 0x311768u;
            goto label_311768;
        }
    }
    ctx->pc = 0x311728u;
    // 0x311728: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x311728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31172c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x31172cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_311730:
    // 0x311730: 0xc0cbac2  jal         func_32EB08
    ctx->pc = 0x311730u;
    SET_GPR_U32(ctx, 31, 0x311738u);
    ctx->pc = 0x311734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311730u;
    // 0x311734: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB08u, 0x311730u, 0x311738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311738u;
label_311738:
    // 0x311738: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x311738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31173c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x31173cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311740: 0x4501ffdd  bc1t        . + 4 + (-0x23 << 2)
    ctx->pc = 0x311740u;
    {
        const bool branch_taken_0x311740 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x311744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311740u;
        // 0x311744: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311740) {
            ctx->pc = 0x3116B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3116b8;
        }
    }
    ctx->pc = 0x311748u;
    // 0x311748: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x311748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x31174c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31174cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x311750: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311754: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x311754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x311758: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x311758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31175c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x31175cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x311760: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x311760u;
    {
        const bool branch_taken_0x311760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311760u;
        // 0x311764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311760) {
            ctx->pc = 0x311730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311730;
        }
    }
    ctx->pc = 0x311768u;
label_311768:
    // 0x311768: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x311768u;
    SET_GPR_U32(ctx, 31, 0x311770u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x311768u, 0x311770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311770u;
label_311770:
    // 0x311770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311774: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x311774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x311778: 0xc0c45e8  jal         func_3117A0
    ctx->pc = 0x311778u;
    SET_GPR_U32(ctx, 31, 0x311780u);
    ctx->pc = 0x31177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311778u;
    // 0x31177c: 0x2665f6d0  addiu       $a1, $s3, -0x930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3117A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3117A0u, 0x311778u, 0x311780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311780u;
label_311780:
    // 0x311780: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x311780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311784: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x311784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311788: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x311788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31178c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x31178cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x311790: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x311790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x311794: 0xc7b40068  lwc1        $f20, 0x68($sp)
    ctx->pc = 0x311794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x311798: 0x3e00008  jr          $ra
    ctx->pc = 0x311798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311798u;
        // 0x31179c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3117A0u;
}
