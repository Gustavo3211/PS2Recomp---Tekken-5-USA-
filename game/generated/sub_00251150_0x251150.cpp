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

// Function: sub_00251150
// Address: 0x251150 - 0x251638
void sub_00251150_0x251150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251150_0x251150");
#endif

    switch (ctx->pc) {
        case 0x251180u: goto label_251180;
        case 0x2511b8u: goto label_2511b8;
        case 0x2511ccu: goto label_2511cc;
        case 0x251530u: goto label_251530;
        default: break;
    }

    ctx->pc = 0x251150u;

    // 0x251150: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x251150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x251154: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x251154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x251158: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x251158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x25115c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25115cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251160: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x251160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x251164: 0x1040012c  beqz        $v0, . + 4 + (0x12C << 2)
    ctx->pc = 0x251164u;
    {
        const bool branch_taken_0x251164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251164u;
        // 0x251168: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251164) {
            ctx->pc = 0x251618u;
            goto label_251618;
        }
    }
    ctx->pc = 0x25116Cu;
    // 0x25116c: 0x8602011c  lh          $v0, 0x11C($s0)
    ctx->pc = 0x25116cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x251170: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x251170u;
    {
        const bool branch_taken_0x251170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251170) {
            ctx->pc = 0x251174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251170u;
            // 0x251174: 0x8e040118  lw          $a0, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251184u;
            goto label_251184;
        }
    }
    ctx->pc = 0x251178u;
    // 0x251178: 0xc094170  jal         func_2505C0
    ctx->pc = 0x251178u;
    SET_GPR_U32(ctx, 31, 0x251180u);
    ctx->pc = 0x25117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251178u;
    // 0x25117c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2505C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2505C0u, 0x251178u, 0x251180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251180u;
label_251180:
    // 0x251180: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x251180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_251184:
    // 0x251184: 0x41443  sra         $v0, $a0, 17
    ctx->pc = 0x251184u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 17));
    // 0x251188: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x251188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25118c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25118Cu;
    {
        const bool branch_taken_0x25118c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25118c) {
            ctx->pc = 0x2511B0u;
            goto label_2511b0;
        }
    }
    ctx->pc = 0x251194u;
    // 0x251194: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x251194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x251198: 0x96030062  lhu         $v1, 0x62($s0)
    ctx->pc = 0x251198u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x25119c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25119cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2511a0: 0xa20000c5  sb          $zero, 0xC5($s0)
    ctx->pc = 0x2511a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 197), (uint8_t)GPR_U32(ctx, 0));
    // 0x2511a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2511a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2511a8: 0xa6030060  sh          $v1, 0x60($s0)
    ctx->pc = 0x2511a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x2511ac: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x2511acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_2511b0:
    // 0x2511b0: 0xc08eb26  jal         func_23AC98
    ctx->pc = 0x2511B0u;
    SET_GPR_U32(ctx, 31, 0x2511B8u);
    ctx->pc = 0x23AC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC98u, 0x2511B0u, 0x2511B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2511B8u;
label_2511b8:
    // 0x2511b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2511B8u;
    {
        const bool branch_taken_0x2511b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2511BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511B8u;
        // 0x2511bc: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2511b8) {
            ctx->pc = 0x2511E0u;
            goto label_2511e0;
        }
    }
    ctx->pc = 0x2511C0u;
    // 0x2511c0: 0xc60c0080  lwc1        $f12, 0x80($s0)
    ctx->pc = 0x2511c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2511c4: 0xc08eaa4  jal         func_23AA90
    ctx->pc = 0x2511C4u;
    SET_GPR_U32(ctx, 31, 0x2511CCu);
    ctx->pc = 0x2511C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2511C4u;
    // 0x2511c8: 0xc60d0088  lwc1        $f13, 0x88($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AA90u, 0x2511C4u, 0x2511CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2511CCu;
label_2511cc:
    // 0x2511cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2511CCu;
    {
        const bool branch_taken_0x2511cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2511D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511CCu;
        // 0x2511d0: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2511cc) {
            ctx->pc = 0x2511E0u;
            goto label_2511e0;
        }
    }
    ctx->pc = 0x2511D4u;
    // 0x2511d4: 0x96020062  lhu         $v0, 0x62($s0)
    ctx->pc = 0x2511d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x2511d8: 0xa20000c5  sb          $zero, 0xC5($s0)
    ctx->pc = 0x2511d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 197), (uint8_t)GPR_U32(ctx, 0));
    // 0x2511dc: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x2511dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_2511e0:
    // 0x2511e0: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x2511e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936748)));
    // 0x2511e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2511E4u;
    {
        const bool branch_taken_0x2511e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2511E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511E4u;
        // 0x2511e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2511e4) {
            ctx->pc = 0x251208u;
            goto label_251208;
        }
    }
    ctx->pc = 0x2511ECu;
    // 0x2511ec: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x2511ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x2511f0: 0x252223b0  addiu       $v0, $t1, 0x23B0
    ctx->pc = 0x2511f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 9136));
    // 0x2511f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2511f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x2511f8: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2511f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2511fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2511FCu;
    {
        const bool branch_taken_0x2511fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511FCu;
        // 0x251200: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2511fc) {
            ctx->pc = 0x25120Cu;
            goto label_25120c;
        }
    }
    ctx->pc = 0x251204u;
    // 0x251204: 0x0  nop
    ctx->pc = 0x251204u;
    // NOP
label_251208:
    // 0x251208: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x251208u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
label_25120c:
    // 0x25120c: 0x10800074  beqz        $a0, . + 4 + (0x74 << 2)
    ctx->pc = 0x25120Cu;
    {
        const bool branch_taken_0x25120c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x251210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25120Cu;
        // 0x251210: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25120c) {
            ctx->pc = 0x2513E0u;
            goto label_2513e0;
        }
    }
    ctx->pc = 0x251214u;
    // 0x251214: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x251214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251218: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x251218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25121c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25121cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251220: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x251220u;
    {
        const bool branch_taken_0x251220 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x251224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251220u;
        // 0x251224: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251220) {
            ctx->pc = 0x25122Cu;
            goto label_25122c;
        }
    }
    ctx->pc = 0x251228u;
    // 0x251228: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x251228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25122c:
    // 0x25122c: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x25122cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x251230: 0x26070070  addiu       $a3, $s0, 0x70
    ctx->pc = 0x251230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x251234: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x251234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x251238: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x251238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x25123c: 0x26080080  addiu       $t0, $s0, 0x80
    ctx->pc = 0x25123cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x251240: 0xc7808970  lwc1        $f0, -0x7690($gp)
    ctx->pc = 0x251240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251244: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x251244u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x251248: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x251248u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25124c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x25124cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x251250: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x251250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251254: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x251254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251258: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x251258u;
    {
        const bool branch_taken_0x251258 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251258u;
        // 0x25125c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251258) {
            ctx->pc = 0x251278u;
            goto label_251278;
        }
    }
    ctx->pc = 0x251260u;
    // 0x251260: 0xc7828974  lwc1        $f2, -0x768C($gp)
    ctx->pc = 0x251260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251264: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x251264u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x251268: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x251268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x25126c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x25126cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251270: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x251270u;
    {
        const bool branch_taken_0x251270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251270u;
        // 0x251274: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251270) {
            ctx->pc = 0x25129Cu;
            goto label_25129c;
        }
    }
    ctx->pc = 0x251278u;
label_251278:
    // 0x251278: 0xc7808978  lwc1        $f0, -0x7688($gp)
    ctx->pc = 0x251278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25127c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25127cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251280: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x251280u;
    {
        const bool branch_taken_0x251280 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251280) {
            ctx->pc = 0x251284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251280u;
            // 0x251284: 0xc6020074  lwc1        $f2, 0x74($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2512A4u;
            goto label_2512a4;
        }
    }
    ctx->pc = 0x251288u;
    // 0x251288: 0xc782897c  lwc1        $f2, -0x7684($gp)
    ctx->pc = 0x251288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25128c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25128cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x251290: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x251290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x251294: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x251294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251298: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x251298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_25129c:
    // 0x25129c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x25129cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2512a0: 0xc6020074  lwc1        $f2, 0x74($s0)
    ctx->pc = 0x2512a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2512a4:
    // 0x2512a4: 0xc7808980  lwc1        $f0, -0x7680($gp)
    ctx->pc = 0x2512a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2512a8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2512a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2512ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2512ACu;
    {
        const bool branch_taken_0x2512ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2512ac) {
            ctx->pc = 0x2512C8u;
            goto label_2512c8;
        }
    }
    ctx->pc = 0x2512B4u;
    // 0x2512b4: 0xc7808984  lwc1        $f0, -0x767C($gp)
    ctx->pc = 0x2512b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2512b8: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2512b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2512bc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2512bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2512c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2512C0u;
    {
        const bool branch_taken_0x2512c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2512C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512C0u;
        // 0x2512c4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512c0) {
            ctx->pc = 0x2512E8u;
            goto label_2512e8;
        }
    }
    ctx->pc = 0x2512C8u;
label_2512c8:
    // 0x2512c8: 0xc7808988  lwc1        $f0, -0x7678($gp)
    ctx->pc = 0x2512c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2512cc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2512ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2512d0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2512D0u;
    {
        const bool branch_taken_0x2512d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2512d0) {
            ctx->pc = 0x2512D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2512D0u;
            // 0x2512d4: 0xc6020050  lwc1        $f2, 0x50($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2512F4u;
            goto label_2512f4;
        }
    }
    ctx->pc = 0x2512D8u;
    // 0x2512d8: 0xc780898c  lwc1        $f0, -0x7674($gp)
    ctx->pc = 0x2512d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2512dc: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2512dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2512e0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2512e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2512e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2512e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2512e8:
    // 0x2512e8: 0xe6020074  swc1        $f2, 0x74($s0)
    ctx->pc = 0x2512e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2512ec: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x2512ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2512f0: 0xc6020050  lwc1        $f2, 0x50($s0)
    ctx->pc = 0x2512f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2512f4:
    // 0x2512f4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2512f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512f8: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2512f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2512fc: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x2512fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x251300: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x251300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251304: 0xc60300a4  lwc1        $f3, 0xA4($s0)
    ctx->pc = 0x251304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x251308: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x251308u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25130c: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x25130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251310: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x251310u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x251314: 0xc6040064  lwc1        $f4, 0x64($s0)
    ctx->pc = 0x251314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x251318: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x251318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
    // 0x25131c: 0xe60400b0  swc1        $f4, 0xB0($s0)
    ctx->pc = 0x25131cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x251320: 0xe6020050  swc1        $f2, 0x50($s0)
    ctx->pc = 0x251320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x251324: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x251324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x251328: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x251328u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25132c: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x25132cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251330: 0x4bdf8428  vadd.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x251330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x251334: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x251334u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x251338: 0x54a00010  bnel        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x251338u;
    {
        const bool branch_taken_0x251338 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x251338) {
            ctx->pc = 0x25133Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251338u;
            // 0x25133c: 0xc6020064  lwc1        $f2, 0x64($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25137Cu;
            goto label_25137c;
        }
    }
    ctx->pc = 0x251340u;
    // 0x251340: 0x860200c6  lh          $v0, 0xC6($s0)
    ctx->pc = 0x251340u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x251344: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x251344u;
    {
        const bool branch_taken_0x251344 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x251348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251344u;
        // 0x251348: 0x960300c6  lhu         $v1, 0xC6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251344) {
            ctx->pc = 0x251378u;
            goto label_251378;
        }
    }
    ctx->pc = 0x25134Cu;
    // 0x25134c: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x25134cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251350: 0xc60000c8  lwc1        $f0, 0xC8($s0)
    ctx->pc = 0x251350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251354: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251358: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x251358u;
    {
        const bool branch_taken_0x251358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251358) {
            ctx->pc = 0x25135Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251358u;
            // 0x25135c: 0xc6020064  lwc1        $f2, 0x64($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25137Cu;
            goto label_25137c;
        }
    }
    ctx->pc = 0x251360u;
    // 0x251360: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x251360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251364: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x251364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x251368: 0xc60100cc  lwc1        $f1, 0xCC($s0)
    ctx->pc = 0x251368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25136c: 0xa60200c6  sh          $v0, 0xC6($s0)
    ctx->pc = 0x25136cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 198), (uint16_t)GPR_U32(ctx, 2));
    // 0x251370: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251374: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x251374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_251378:
    // 0x251378: 0xc6020064  lwc1        $f2, 0x64($s0)
    ctx->pc = 0x251378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25137c:
    // 0x25137c: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x25137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251380: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x251380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x251384: 0x46001100  add.s       $f4, $f2, $f0
    ctx->pc = 0x251384u;
    ctx->f[4] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x251388: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x251388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25138c: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x25138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251390: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x251390u;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
    // 0x251394: 0xc60200c0  lwc1        $f2, 0xC0($s0)
    ctx->pc = 0x251394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251398: 0xc60300bc  lwc1        $f3, 0xBC($s0)
    ctx->pc = 0x251398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25139c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x25139cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2513a0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2513a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2513a4: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x2513a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2513a8: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x2513a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2513ac: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2513ACu;
    {
        const bool branch_taken_0x2513ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2513B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513ACu;
        // 0x2513b0: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2513ac) {
            ctx->pc = 0x2513CCu;
            goto label_2513cc;
        }
    }
    ctx->pc = 0x2513B4u;
    // 0x2513b4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2513b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2513b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2513b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2513bc: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x2513bcu;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x2513c0: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x2513c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2513c4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2513C4u;
    {
        const bool branch_taken_0x2513c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2513c4) {
            ctx->pc = 0x2513C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2513C4u;
            // 0x2513c8: 0x46002146  mov.s       $f5, $f4 (Delay Slot)
            ctx->f[5] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2513CCu;
            goto label_2513cc;
        }
    }
    ctx->pc = 0x2513CCu;
label_2513cc:
    // 0x2513cc: 0x96020060  lhu         $v0, 0x60($s0)
    ctx->pc = 0x2513ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2513d0: 0xe6050064  swc1        $f5, 0x64($s0)
    ctx->pc = 0x2513d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2513d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2513d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2513d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2513D8u;
    {
        const bool branch_taken_0x2513d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2513DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513D8u;
        // 0x2513dc: 0xa6020060  sh          $v0, 0x60($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2513d8) {
            ctx->pc = 0x2513ECu;
            goto label_2513ec;
        }
    }
    ctx->pc = 0x2513E0u;
label_2513e0:
    // 0x2513e0: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x2513e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2513e4: 0x26080080  addiu       $t0, $s0, 0x80
    ctx->pc = 0x2513e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2513e8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2513e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_2513ec:
    // 0x2513ec: 0x252223b0  addiu       $v0, $t1, 0x23B0
    ctx->pc = 0x2513ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 9136));
    // 0x2513f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2513f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2513f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2513f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2513f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2513f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2513fc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2513fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251400: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x251400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251404: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x251404u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x251408: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x251408u;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
    // 0x25140c: 0xd9100000  lqc2        $vf16, 0x0($t0)
    ctx->pc = 0x25140cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x251410: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x251410u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x251414: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x251414u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x251418: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x251418u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25141c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25141cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x251420: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251424: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x251424u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x251428: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x251428u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25142c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x25142cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x251430: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x251430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x251434: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x251434u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x251438: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x251438u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25143c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x25143cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251440: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x251440u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251444: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x251444u;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
    // 0x251448: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x251448u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25144c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x25144cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x251450: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x251450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x251454: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x251454u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251458: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x251458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25145c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25145cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251460: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x251460u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x251464: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x251464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x251468: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x251468u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25146c: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x25146cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x251470: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x251470u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x251474: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x251474u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x251478: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x251478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25147c: 0xc7808990  lwc1        $f0, -0x7670($gp)
    ctx->pc = 0x25147cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251480: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x251480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x251484: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x251484u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x251488: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x251488u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25148c: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x25148cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251490: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x251490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x251494: 0x4bdf81ff  .word       0x4BDF81FF                   # vclipw.xyz  $vf16, $vf31w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x251494u;
    { __m128 fs = ctx->vu0_vf[16]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x251498: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x251498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25149c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25149cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2514a0: 0x4a0002ff  vnop
    ctx->pc = 0x2514a0u;
    // NOP operation, no action needed for VU0
    // 0x2514a4: 0x4a0002ff  vnop
    ctx->pc = 0x2514a4u;
    // NOP operation, no action needed for VU0
    // 0x2514a8: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x2514a8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x2514ac: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2514acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2514b0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2514B0u;
    {
        const bool branch_taken_0x2514b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2514B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514B0u;
        // 0x2514b4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2514b0) {
            ctx->pc = 0x2514E8u;
            goto label_2514e8;
        }
    }
    ctx->pc = 0x2514B8u;
    // 0x2514b8: 0x30420015  andi        $v0, $v0, 0x15
    ctx->pc = 0x2514b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)21);
    // 0x2514bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2514bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2514c0: 0x32e80  sll         $a1, $v1, 26
    ctx->pc = 0x2514c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
    // 0x2514c4: 0x32780  sll         $a0, $v1, 30
    ctx->pc = 0x2514c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 30));
    // 0x2514c8: 0x31f00  sll         $v1, $v1, 28
    ctx->pc = 0x2514c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
    // 0x2514cc: 0x70641488  pextlw      $v0, $v1, $a0
    ctx->pc = 0x2514ccu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2514d0: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x2514d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x2514d4: 0x700217bf  psraw       $v0, $v0, 30
    ctx->pc = 0x2514d4u;
    SET_GPR_VEC(ctx, 2, _mm_srai_epi32(GPR_VEC(ctx, 2), 30));
    // 0x2514d8: 0x48a2c000  qmtc2.ni    $v0, $vf24
    ctx->pc = 0x2514d8u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2514dc: 0x4bffc13c  vitof0.xyzw $vf31, $vf24
    ctx->pc = 0x2514dcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[24]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2514e0: 0x4be0803c  vaddax.xyzw $ACC, $vf16, $vf0x
    ctx->pc = 0x2514e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2514e4: 0x4be1fc0c  vmsubx.xyzw $vf16, $vf31, $vf1x
    ctx->pc = 0x2514e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
label_2514e8:
    // 0x2514e8: 0xf8d00000  sqc2        $vf16, 0x0($a2)
    ctx->pc = 0x2514e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2514ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2514ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514f0: 0xc60200b0  lwc1        $f2, 0xB0($s0)
    ctx->pc = 0x2514f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2514f4: 0xc60300b8  lwc1        $f3, 0xB8($s0)
    ctx->pc = 0x2514f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2514f8: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x2514f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2514fc: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2514fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251500: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x251500u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x251504: 0x860500e4  lh          $a1, 0xE4($s0)
    ctx->pc = 0x251504u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x251508: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x251508u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x25150c: 0x860600f4  lh          $a2, 0xF4($s0)
    ctx->pc = 0x25150cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x251510: 0x860700e6  lh          $a3, 0xE6($s0)
    ctx->pc = 0x251510u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 230)));
    // 0x251514: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x251514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x251518: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x251518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x25151c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25151cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x251520: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x251520u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x251524: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x251524u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x251528: 0xc090a16  jal         func_242858
    ctx->pc = 0x251528u;
    SET_GPR_U32(ctx, 31, 0x251530u);
    ctx->pc = 0x25152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251528u;
    // 0x25152c: 0xe7a30024  swc1        $f3, 0x24($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x242858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242858u, 0x251528u, 0x251530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251530u;
label_251530:
    // 0x251530: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x251530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251534: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x251534u;
    {
        const bool branch_taken_0x251534 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x251538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251534u;
        // 0x251538: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251534) {
            ctx->pc = 0x2515ACu;
            goto label_2515ac;
        }
    }
    ctx->pc = 0x25153Cu;
    // 0x25153c: 0x260200d8  addiu       $v0, $s0, 0xD8
    ctx->pc = 0x25153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
    // 0x251540: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x251540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251544: 0x260300e8  addiu       $v1, $s0, 0xE8
    ctx->pc = 0x251544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    // 0x251548: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x251548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25154c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x25154cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x251550: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x251550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x251554: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x251554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x251558: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x251558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25155c: 0xe60500d8  swc1        $f5, 0xD8($s0)
    ctx->pc = 0x25155cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x251560: 0xe60400dc  swc1        $f4, 0xDC($s0)
    ctx->pc = 0x251560u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    // 0x251564: 0xe60300e0  swc1        $f3, 0xE0($s0)
    ctx->pc = 0x251564u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x251568: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x251568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x25156c: 0xe60100ec  swc1        $f1, 0xEC($s0)
    ctx->pc = 0x25156cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x251570: 0xe60200f0  swc1        $f2, 0xF0($s0)
    ctx->pc = 0x251570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x251574: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x251574u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x251578: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x251578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x25157c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x251580: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x251580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251584: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x251584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x251588: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x251588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x25158c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x25158cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x251590: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x251590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251594: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x251594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x251598: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x251598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25159c: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x25159cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2515a0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2515a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2515a4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2515a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2515a8: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x2515a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_2515ac:
    // 0x2515ac: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x2515acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2515b0: 0x86030062  lh          $v1, 0x62($s0)
    ctx->pc = 0x2515b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x2515b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2515b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2515b8: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2515B8u;
    {
        const bool branch_taken_0x2515b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2515b8) {
            ctx->pc = 0x2515BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2515B8u;
            // 0x2515bc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25162Cu;
            goto label_25162c;
        }
    }
    ctx->pc = 0x2515C0u;
    // 0x2515c0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2515c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2515c4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2515c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2515c8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2515c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2515cc: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x2515CCu;
    {
        const bool branch_taken_0x2515cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2515cc) {
            ctx->pc = 0x2515D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2515CCu;
            // 0x2515d0: 0x8e020118  lw          $v0, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25161Cu;
            goto label_25161c;
        }
    }
    ctx->pc = 0x2515D4u;
    // 0x2515d4: 0x920200c5  lbu         $v0, 0xC5($s0)
    ctx->pc = 0x2515d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 197)));
    // 0x2515d8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2515D8u;
    {
        const bool branch_taken_0x2515d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2515d8) {
            ctx->pc = 0x2515DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2515D8u;
            // 0x2515dc: 0x8e020118  lw          $v0, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25161Cu;
            goto label_25161c;
        }
    }
    ctx->pc = 0x2515E0u;
    // 0x2515e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2515e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2515e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2515e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2515e8: 0x920300c5  lbu         $v1, 0xC5($s0)
    ctx->pc = 0x2515e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 197)));
    // 0x2515ec: 0xe60200bc  swc1        $f2, 0xBC($s0)
    ctx->pc = 0x2515ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x2515f0: 0xa6030062  sh          $v1, 0x62($s0)
    ctx->pc = 0x2515f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 3));
    // 0x2515f4: 0xa20000c5  sb          $zero, 0xC5($s0)
    ctx->pc = 0x2515f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 197), (uint8_t)GPR_U32(ctx, 0));
    // 0x2515f8: 0x0  nop
    ctx->pc = 0x2515f8u;
    // NOP
    // 0x2515fc: 0x0  nop
    ctx->pc = 0x2515fcu;
    // NOP
    // 0x251600: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x251600u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x251604: 0xa6000060  sh          $zero, 0x60($s0)
    ctx->pc = 0x251604u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x251608: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x251608u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25160c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25160Cu;
    {
        const bool branch_taken_0x25160c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25160Cu;
        // 0x251610: 0xe60000b4  swc1        $f0, 0xB4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25160c) {
            ctx->pc = 0x251628u;
            goto label_251628;
        }
    }
    ctx->pc = 0x251614u;
    // 0x251614: 0x0  nop
    ctx->pc = 0x251614u;
    // NOP
label_251618:
    // 0x251618: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x251618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_25161c:
    // 0x25161c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x25161cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x251620: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x251620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x251624: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x251624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_251628:
    // 0x251628: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x251628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25162c:
    // 0x25162c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x25162cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x251630: 0x3e00008  jr          $ra
    ctx->pc = 0x251630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251630u;
        // 0x251634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251638u;
}
