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

// Function: sub_00255148
// Address: 0x255148 - 0x255820
void sub_00255148_0x255148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255148_0x255148");
#endif

    switch (ctx->pc) {
        case 0x255190u: goto label_255190;
        case 0x2551a8u: goto label_2551a8;
        case 0x2551b0u: goto label_2551b0;
        case 0x255218u: goto label_255218;
        case 0x2552d4u: goto label_2552d4;
        case 0x255348u: goto label_255348;
        case 0x255370u: goto label_255370;
        case 0x2553bcu: goto label_2553bc;
        case 0x2554acu: goto label_2554ac;
        case 0x2554d4u: goto label_2554d4;
        case 0x255560u: goto label_255560;
        case 0x255578u: goto label_255578;
        case 0x255594u: goto label_255594;
        case 0x2555a0u: goto label_2555a0;
        case 0x2555d4u: goto label_2555d4;
        case 0x255618u: goto label_255618;
        case 0x255628u: goto label_255628;
        case 0x2556d0u: goto label_2556d0;
        case 0x255778u: goto label_255778;
        default: break;
    }

    ctx->pc = 0x255148u;

    // 0x255148: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x255148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x25514c: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x25514cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x255150: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x255150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255154: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x255154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
    // 0x255158: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x255158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x25515c: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x25515cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x255160: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x255160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x255164: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x255164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x255168: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x255168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x25516c: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x25516cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x255170: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x255170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x255174: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x255174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x255178: 0xe7b80130  swc1        $f24, 0x130($sp)
    ctx->pc = 0x255178u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x25517c: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x25517cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x255180: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x255180u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x255184: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x255184u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x255188: 0xc08c31a  jal         func_230C68
    ctx->pc = 0x255188u;
    SET_GPR_U32(ctx, 31, 0x255190u);
    ctx->pc = 0x25518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255188u;
    // 0x25518c: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x230C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230C68u, 0x255188u, 0x255190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255190u;
label_255190:
    // 0x255190: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x255190u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255194: 0x8662011c  lh          $v0, 0x11C($s3)
    ctx->pc = 0x255194u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x255198: 0x54400067  bnel        $v0, $zero, . + 4 + (0x67 << 2)
    ctx->pc = 0x255198u;
    {
        const bool branch_taken_0x255198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255198) {
            ctx->pc = 0x25519Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255198u;
            // 0x25519c: 0x3c1e003b  lui         $fp, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255338u;
            goto label_255338;
        }
    }
    ctx->pc = 0x2551A0u;
    // 0x2551a0: 0xc090386  jal         func_240E18
    ctx->pc = 0x2551A0u;
    SET_GPR_U32(ctx, 31, 0x2551A8u);
    ctx->pc = 0x240E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E18u, 0x2551A0u, 0x2551A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551A8u;
label_2551a8:
    // 0x2551a8: 0xc090394  jal         func_240E50
    ctx->pc = 0x2551A8u;
    SET_GPR_U32(ctx, 31, 0x2551B0u);
    ctx->pc = 0x2551ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2551A8u;
    // 0x2551ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E50u, 0x2551A8u, 0x2551B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551B0u;
label_2551b0:
    // 0x2551b0: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2551B0u;
    {
        const bool branch_taken_0x2551b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2551B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551B0u;
        // 0x2551b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551b0) {
            ctx->pc = 0x2551D0u;
            goto label_2551d0;
        }
    }
    ctx->pc = 0x2551B8u;
    // 0x2551b8: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x2551b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x2551bc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2551bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2551c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2551c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2551c4: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x2551C4u;
    {
        const bool branch_taken_0x2551c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2551C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551C4u;
        // 0x2551c8: 0xae620118  sw          $v0, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551c4) {
            ctx->pc = 0x2557DCu;
            goto label_2557dc;
        }
    }
    ctx->pc = 0x2551CCu;
    // 0x2551cc: 0x0  nop
    ctx->pc = 0x2551ccu;
    // NOP
label_2551d0:
    // 0x2551d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2551d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2551d4: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x2551d4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x2551d8: 0xae620118  sw          $v0, 0x118($s3)
    ctx->pc = 0x2551d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 2));
    // 0x2551dc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2551dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2551e0: 0x27c3fd90  addiu       $v1, $fp, -0x270
    ctx->pc = 0x2551e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966672));
    // 0x2551e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2551e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2551e8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2551e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2551ec: 0x2456c778  addiu       $s6, $v0, -0x3888
    ctx->pc = 0x2551ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952824));
    // 0x2551f0: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x2551f0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x2551f4: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x2551f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x2551f8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2551f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3AFD90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFD90u, _value); } while (0); }
    // 0x2551fc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2551fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255200: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x255200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3AFD94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFD94u, _value); } while (0); }
    // 0x255204: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x255204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255208: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x255208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3AFD98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFD98u, _value); } while (0); }
    // 0x25520c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x25520cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255210: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x255210u;
    {
        const bool branch_taken_0x255210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255210u;
        // 0x255214: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255210) {
            ctx->pc = 0x2552B8u;
            goto label_2552b8;
        }
    }
    ctx->pc = 0x255218u;
label_255218:
    // 0x255218: 0xa491011e  sh          $s1, 0x11E($a0)
    ctx->pc = 0x255218u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 286), (uint16_t)GPR_U32(ctx, 17));
    // 0x25521c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x25521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255220: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x255220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255224: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x255224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x255228: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x255228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25522c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25522cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x255230: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x255230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x255234: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x255234u;
    {
        const bool branch_taken_0x255234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255234u;
        // 0x255238: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255234) {
            ctx->pc = 0x25524Cu;
            goto label_25524c;
        }
    }
    ctx->pc = 0x25523Cu;
    // 0x25523c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x25523cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x255240: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x255240u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x255244: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x255244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x255248: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x255248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
label_25524c:
    // 0x25524c: 0xa083005c  sb          $v1, 0x5C($a0)
    ctx->pc = 0x25524cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 3));
    // 0x255250: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x255250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255254: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x255254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255258: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x255258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25525c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x25525cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255260: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x255260u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x255264: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x255264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x255268: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x255268u;
    {
        const bool branch_taken_0x255268 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255268) {
            ctx->pc = 0x25526Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255268u;
            // 0x25526c: 0xa083005d  sb          $v1, 0x5D($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255284u;
            goto label_255284;
        }
    }
    ctx->pc = 0x255270u;
    // 0x255270: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x255270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x255274: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x255274u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x255278: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x255278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25527c: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x25527cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x255280: 0xa083005d  sb          $v1, 0x5D($a0)
    ctx->pc = 0x255280u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 3));
label_255284:
    // 0x255284: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x255284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255288: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x255288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25528c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25528cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x255290: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x255290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255294: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x255294u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x255298: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x255298u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25529c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x25529Cu;
    {
        const bool branch_taken_0x25529c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25529c) {
            ctx->pc = 0x2552A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25529Cu;
            // 0x2552a0: 0xa082005e  sb          $v0, 0x5E($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2552B8u;
            goto label_2552b8;
        }
    }
    ctx->pc = 0x2552A4u;
    // 0x2552a4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2552a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2552a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2552a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2552ac: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2552acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2552b0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x2552b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x2552b4: 0xa082005e  sb          $v0, 0x5E($a0)
    ctx->pc = 0x2552b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 2));
label_2552b8:
    // 0x2552b8: 0x2a22000f  slti        $v0, $s1, 0xF
    ctx->pc = 0x2552b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x2552bc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2552BCu;
    {
        const bool branch_taken_0x2552bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2552bc) {
            ctx->pc = 0x2552C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2552BCu;
            // 0x2552c0: 0xc6410000  lwc1        $f1, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2552F0u;
            goto label_2552f0;
        }
    }
    ctx->pc = 0x2552C4u;
    // 0x2552c4: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x2552c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x2552c8: 0x26a45080  addiu       $a0, $s5, 0x5080
    ctx->pc = 0x2552c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20608));
    // 0x2552cc: 0xc0937c4  jal         func_24DF10
    ctx->pc = 0x2552CCu;
    SET_GPR_U32(ctx, 31, 0x2552D4u);
    ctx->pc = 0x2552D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2552CCu;
    // 0x2552d0: 0x568021  addu        $s0, $v0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF10u, 0x2552CCu, 0x2552D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552D4u;
label_2552d4:
    // 0x2552d4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2552d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2552d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2552d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2552dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2552dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2552e0: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x2552e0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
    // 0x2552e4: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2552E4u;
    {
        const bool branch_taken_0x2552e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2552E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552E4u;
        // 0x2552e8: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552e4) {
            ctx->pc = 0x255218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255218;
        }
    }
    ctx->pc = 0x2552ECu;
    // 0x2552ec: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2552ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2552f0:
    // 0x2552f0: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x2552f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x2552f4: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2552f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2552f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2552f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2552fc: 0x2463c960  addiu       $v1, $v1, -0x36A0
    ctx->pc = 0x2552fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953312));
    // 0x255300: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x255300u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x255304: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x255304u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x255308: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x255308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x16C960u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x16C960u, _value); } while (0); }
    // 0x25530c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x25530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255310: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x255310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x255314: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x255314u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x255318: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x255318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x16C964u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x16C964u, _value); } while (0); }
    // 0x25531c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x25531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255320: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x255320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x255324: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x255324u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x255328: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x255328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x16C968u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x16C968u, _value); } while (0); }
    // 0x25532c: 0x9662011c  lhu         $v0, 0x11C($s3)
    ctx->pc = 0x25532cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x255330: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x255330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x255334: 0xa662011c  sh          $v0, 0x11C($s3)
    ctx->pc = 0x255334u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 284), (uint16_t)GPR_U32(ctx, 2));
label_255338:
    // 0x255338: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x255338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x25533c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25533cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255340: 0x2444c970  addiu       $a0, $v0, -0x3690
    ctx->pc = 0x255340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953328));
    // 0x255344: 0x0  nop
    ctx->pc = 0x255344u;
    // NOP
label_255348:
    // 0x255348: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x255348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x25534c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25534cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x255350: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x255350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x255354: 0x2a23000f  slti        $v1, $s1, 0xF
    ctx->pc = 0x255354u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x255358: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x255358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25535c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25535cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x255360: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x255360u;
    {
        const bool branch_taken_0x255360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x255364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255360u;
        // 0x255364: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255360) {
            ctx->pc = 0x255348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255348;
        }
    }
    ctx->pc = 0x255368u;
    // 0x255368: 0xc08c1b0  jal         func_2306C0
    ctx->pc = 0x255368u;
    SET_GPR_U32(ctx, 31, 0x255370u);
    ctx->pc = 0x25536Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255368u;
    // 0x25536c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2306C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2306C0u, 0x255368u, 0x255370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255370u;
label_255370:
    // 0x255370: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x255370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255374: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x255374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x255378: 0x27c3fd90  addiu       $v1, $fp, -0x270
    ctx->pc = 0x255378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966672));
    // 0x25537c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25537cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255380: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x255380u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x255384: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x255384u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x255388: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x255388u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25538c: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x25538cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x255390: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x255390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255394: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x255394u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255398: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x255398u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25539c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x25539cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2553a0: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2553a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2553a4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2553a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2553a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2553a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2553acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2553b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553b4: 0xc084a9a  jal         func_212A68
    ctx->pc = 0x2553B4u;
    SET_GPR_U32(ctx, 31, 0x2553BCu);
    ctx->pc = 0x2553B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2553B4u;
    // 0x2553b8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212A68u, 0x2553B4u, 0x2553BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2553BCu;
label_2553bc:
    // 0x2553bc: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2553bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2553c0: 0x4400106  bltz        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x2553C0u;
    {
        const bool branch_taken_0x2553c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2553C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553C0u;
        // 0x2553c4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2553c0) {
            ctx->pc = 0x2557DCu;
            goto label_2557dc;
        }
    }
    ctx->pc = 0x2553C8u;
    // 0x2553c8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2553c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2553cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2553ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2553d0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2553d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2553d4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2553d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2553d8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2553d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2553dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2553dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2553e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2553e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2553e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2553e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2553e8: 0x8ca28880  lw          $v0, -0x7780($a1)
    ctx->pc = 0x2553e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936704)));
    // 0x2553ec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2553ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2553f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2553f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2553f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2553f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2553f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2553f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2553fc: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x2553fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
    // 0x255400: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x255400u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x255404: 0x8e94c700  lw          $s4, -0x3900($s4)
    ctx->pc = 0x255404u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952704)));
    // 0x255408: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x255408u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x25540c: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x25540cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x255410: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x255410u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x255414: 0x4615a81a  mula.s      $f21, $f21
    ctx->pc = 0x255414u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[21], ctx->f[21]));
    // 0x255418: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x255418u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x25541c: 0x46000044  c1          0x44
    ctx->pc = 0x25541cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x255420: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x255420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x255424: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x255424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255428: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x255428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25542c: 0x450100ec  bc1t        . + 4 + (0xEC << 2)
    ctx->pc = 0x25542Cu;
    {
        const bool branch_taken_0x25542c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x255430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25542Cu;
        // 0x255430: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25542c) {
            ctx->pc = 0x2557E0u;
            goto label_2557e0;
        }
    }
    ctx->pc = 0x255434u;
    // 0x255434: 0xc7808a20  lwc1        $f0, -0x75E0($gp)
    ctx->pc = 0x255434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255438: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25543c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x25543cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x255440: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x255440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255444: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x255444u;
    {
        const bool branch_taken_0x255444 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255444) {
            ctx->pc = 0x255464u;
            goto label_255464;
        }
    }
    ctx->pc = 0x25544Cu;
    // 0x25544c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x25544cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x255450: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x255450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x255454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255458: 0x0  nop
    ctx->pc = 0x255458u;
    // NOP
    // 0x25545c: 0x0  nop
    ctx->pc = 0x25545cu;
    // NOP
    // 0x255460: 0x46000dc3  div.s       $f23, $f1, $f0
    ctx->pc = 0x255460u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[23] = ctx->f[1] / ctx->f[0];
label_255464:
    // 0x255464: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255468: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x255468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x25546c: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x25546cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x255470: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x255470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x255474: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x255474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255478: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x255478u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25547c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x25547Cu;
    {
        const bool branch_taken_0x25547c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25547Cu;
        // 0x255480: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25547c) {
            ctx->pc = 0x25549Cu;
            goto label_25549c;
        }
    }
    ctx->pc = 0x255484u;
    // 0x255484: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x255484u;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x255488: 0xc7818a24  lwc1        $f1, -0x75DC($gp)
    ctx->pc = 0x255488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25548c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x25548cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x255490: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x255490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x255494: 0x46180600  add.s       $f24, $f0, $f24
    ctx->pc = 0x255494u;
    ctx->f[24] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x255498: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x255498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_25549c:
    // 0x25549c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25549cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2554a0: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2554a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2554a4: 0xc08c19c  jal         func_230670
    ctx->pc = 0x2554A4u;
    SET_GPR_U32(ctx, 31, 0x2554ACu);
    ctx->pc = 0x2554A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2554A4u;
    // 0x2554a8: 0xc456327c  lwc1        $f22, 0x327C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x230670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230670u, 0x2554A4u, 0x2554ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2554ACu;
label_2554ac:
    // 0x2554ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2554acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2554b0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2554b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2554b4: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x2554b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x2554b8: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x2554b8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2554bc: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x2554bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x2554c0: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x2554c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2554c4: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x2554c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x2554c8: 0x78450030  lq          $a1, 0x30($v0)
    ctx->pc = 0x2554c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2554cc: 0xc08c1ba  jal         func_2306E8
    ctx->pc = 0x2554CCu;
    SET_GPR_U32(ctx, 31, 0x2554D4u);
    ctx->pc = 0x2554D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2554CCu;
    // 0x2554d0: 0x7fa500a0  sq          $a1, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2306E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2306E8u, 0x2554CCu, 0x2554D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2554D4u;
label_2554d4:
    // 0x2554d4: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2554d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2554d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2554d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2554dc: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x2554dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2554e0: 0x27c2fd90  addiu       $v0, $fp, -0x270
    ctx->pc = 0x2554e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966672));
    // 0x2554e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2554e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2554e8: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x2554e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2554ec: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2554ecu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2554f0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2554f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2554f4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2554f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2554f8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2554f8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2554fc: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2554fcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x255500: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x255500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255504: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x255504u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255508: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x255508u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25550c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x25550cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x255510: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x255510u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x255514: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x255514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255518: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x255518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25551c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x25551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x255520: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x255520u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255524: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x255524u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255528: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x255528u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x25552c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x25552cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x255530: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x255530u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x255534: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x255534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255538: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x255538u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25553c: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x25553cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255540: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x255540u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x255544: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x255544u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x255548: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x255548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25554c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x25554cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x255550: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x255550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x255554: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x255554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255558: 0xc0953d0  jal         func_254F40
    ctx->pc = 0x255558u;
    SET_GPR_U32(ctx, 31, 0x255560u);
    ctx->pc = 0x25555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255558u;
    // 0x25555c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F40u, 0x255558u, 0x255560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255560u;
label_255560:
    // 0x255560: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x255560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255564: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x255564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x255568: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x255568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25556c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25556cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255570: 0xc084774  jal         func_211DD0
    ctx->pc = 0x255570u;
    SET_GPR_U32(ctx, 31, 0x255578u);
    ctx->pc = 0x255574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255570u;
    // 0x255574: 0x24160040  addiu       $s6, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x255570u, 0x255578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255578u;
label_255578:
    // 0x255578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25557c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25557cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255580: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x255580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255584: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x255584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255588: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x255588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25558c: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x25558Cu;
    SET_GPR_U32(ctx, 31, 0x255594u);
    ctx->pc = 0x255590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25558Cu;
    // 0x255590: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x25558Cu, 0x255594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255594u;
label_255594:
    // 0x255594: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x255594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x255598: 0x245588d0  addiu       $s5, $v0, -0x7730
    ctx->pc = 0x255598u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x25559c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25559cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2555a0:
    // 0x2555a0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2555a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2555a4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2555a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2555a8: 0x920301bb  lbu         $v1, 0x1BB($s0)
    ctx->pc = 0x2555a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 443)));
    // 0x2555ac: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2555ACu;
    {
        const bool branch_taken_0x2555ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2555B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555ACu;
        // 0x2555b0: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2555ac) {
            ctx->pc = 0x25564Cu;
            goto label_25564c;
        }
    }
    ctx->pc = 0x2555B4u;
    // 0x2555b4: 0x2561804  sllv        $v1, $s6, $s2
    ctx->pc = 0x2555b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 18) & 0x1F));
    // 0x2555b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2555b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2555bc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2555BCu;
    {
        const bool branch_taken_0x2555bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2555C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555BCu;
        // 0x2555c0: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2555bc) {
            ctx->pc = 0x25564Cu;
            goto label_25564c;
        }
    }
    ctx->pc = 0x2555C4u;
    // 0x2555c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2555c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2555c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2555c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2555cc: 0xc08491e  jal         func_212478
    ctx->pc = 0x2555CCu;
    SET_GPR_U32(ctx, 31, 0x2555D4u);
    ctx->pc = 0x2555D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2555CCu;
    // 0x2555d0: 0x26060790  addiu       $a2, $s0, 0x790 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2555CCu, 0x2555D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2555D4u;
label_2555d4:
    // 0x2555d4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2555d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2555d8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2555d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2555dc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2555dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2555e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2555e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2555e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2555e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2555e8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2555e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2555ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2555ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2555f0: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x2555f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2555f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2555F4u;
    {
        const bool branch_taken_0x2555f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2555F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555F4u;
        // 0x2555f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2555f4) {
            ctx->pc = 0x255600u;
            goto label_255600;
        }
    }
    ctx->pc = 0x2555FCu;
    // 0x2555fc: 0x4600b046  mov.s       $f1, $f22
    ctx->pc = 0x2555fcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[22]);
label_255600:
    // 0x255600: 0x8e020894  lw          $v0, 0x894($s0)
    ctx->pc = 0x255600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2196)));
    // 0x255604: 0x46000d86  mov.s       $f22, $f1
    ctx->pc = 0x255604u;
    ctx->f[22] = FPU_MOV_S(ctx->f[1]);
    // 0x255608: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x255608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x25560c: 0x24a60cd0  addiu       $a2, $a1, 0xCD0
    ctx->pc = 0x25560cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3280));
    // 0x255610: 0xc0847ec  jal         func_211FB0
    ctx->pc = 0x255610u;
    SET_GPR_U32(ctx, 31, 0x255618u);
    ctx->pc = 0x255614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255610u;
    // 0x255614: 0x24a50220  addiu       $a1, $a1, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211FB0u, 0x255610u, 0x255618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255618u;
label_255618:
    // 0x255618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25561c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25561cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255620: 0xc08491e  jal         func_212478
    ctx->pc = 0x255620u;
    SET_GPR_U32(ctx, 31, 0x255628u);
    ctx->pc = 0x255624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255620u;
    // 0x255624: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x255620u, 0x255628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255628u;
label_255628:
    // 0x255628: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x255628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25562c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x25562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255630: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x255630u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x255634: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x255634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x255638: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x255638u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25563c: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x25563cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255640: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x255640u;
    {
        const bool branch_taken_0x255640 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255640) {
            ctx->pc = 0x255644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255640u;
            // 0x255644: 0x4600b046  mov.s       $f1, $f22 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x255648u;
            goto label_255648;
        }
    }
    ctx->pc = 0x255648u;
label_255648:
    // 0x255648: 0x46000d86  mov.s       $f22, $f1
    ctx->pc = 0x255648u;
    ctx->f[22] = FPU_MOV_S(ctx->f[1]);
label_25564c:
    // 0x25564c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25564cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x255650: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x255650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x255654: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x255654u;
    {
        const bool branch_taken_0x255654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255654u;
        // 0x255658: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255654) {
            ctx->pc = 0x2555A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2555a0;
        }
    }
    ctx->pc = 0x25565Cu;
    // 0x25565c: 0xc7808a28  lwc1        $f0, -0x75D8($gp)
    ctx->pc = 0x25565cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255660: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x255660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255664: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x255664u;
    {
        const bool branch_taken_0x255664 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255664u;
        // 0x255668: 0x1457c3  sra         $t2, $s4, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 20), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255664) {
            ctx->pc = 0x255684u;
            goto label_255684;
        }
    }
    ctx->pc = 0x25566Cu;
    // 0x25566c: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x25566cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x255670: 0xc7818a2c  lwc1        $f1, -0x75D4($gp)
    ctx->pc = 0x255670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255674: 0x0  nop
    ctx->pc = 0x255674u;
    // NOP
    // 0x255678: 0x0  nop
    ctx->pc = 0x255678u;
    // NOP
    // 0x25567c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x25567cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x255680: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x255680u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_255684:
    // 0x255684: 0xc7808a30  lwc1        $f0, -0x75D0($gp)
    ctx->pc = 0x255684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255688: 0xa17c2  srl         $v0, $t2, 31
    ctx->pc = 0x255688u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x25568c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x25568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x255690: 0x4600a0c2  mul.s       $f3, $f20, $f0
    ctx->pc = 0x255690u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x255694: 0x29043  sra         $s2, $v0, 1
    ctx->pc = 0x255694u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
    // 0x255698: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x255698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x25569c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25569cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2556a0: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x2556a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2556a4: 0x4600a882  mul.s       $f2, $f21, $f0
    ctx->pc = 0x2556a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2556a8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2556A8u;
    {
        const bool branch_taken_0x2556a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2556ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556A8u;
        // 0x2556ac: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556a8) {
            ctx->pc = 0x255738u;
            goto label_255738;
        }
    }
    ctx->pc = 0x2556B0u;
    // 0x2556b0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2556b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2556b4: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x2556b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x2556b8: 0x2449c77c  addiu       $t1, $v0, -0x3884
    ctx->pc = 0x2556b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952828));
    // 0x2556bc: 0x2468c970  addiu       $t0, $v1, -0x3690
    ctx->pc = 0x2556bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953328));
    // 0x2556c0: 0x340dfde8  ori         $t5, $zero, 0xFDE8
    ctx->pc = 0x2556c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65000);
    // 0x2556c4: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x2556c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2556c8: 0x252b0004  addiu       $t3, $t1, 0x4
    ctx->pc = 0x2556c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2556cc: 0x0  nop
    ctx->pc = 0x2556ccu;
    // NOP
label_2556d0:
    // 0x2556d0: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x2556d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2556d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2556d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2556d8: 0x6b2021  addu        $a0, $v1, $t3
    ctx->pc = 0x2556d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2556dc: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x2556dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2556e0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2556e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2556e4: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x2556e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2556e8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2556e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2556ec: 0x4600a924  .word       0x4600A924                   # cvt.w.s     $f4, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2556ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x2556f0: 0xe4c40000  swc1        $f4, 0x0($a2)
    ctx->pc = 0x2556f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2556f4: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x2556f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x2556f8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2556f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2556fc: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2556fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x255700: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x255700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x255704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x255704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255708: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x255708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x25570c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x25570cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255710: 0x254382a  slt         $a3, $s2, $s4
    ctx->pc = 0x255710u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x255714: 0x4600a124  .word       0x4600A124                   # cvt.w.s     $f4, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x255714u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x255718: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x255718u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25571c: 0xac8d0008  sw          $t5, 0x8($a0)
    ctx->pc = 0x25571cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 13));
    // 0x255720: 0x4602ad40  add.s       $f21, $f21, $f2
    ctx->pc = 0x255720u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x255724: 0xac6c000c  sw          $t4, 0xC($v1)
    ctx->pc = 0x255724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 12));
    // 0x255728: 0x4603a500  add.s       $f20, $f20, $f3
    ctx->pc = 0x255728u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x25572c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x25572cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x255730: 0x14e0ffe7  bnez        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x255730u;
    {
        const bool branch_taken_0x255730 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x255734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255730u;
        // 0x255734: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255730) {
            ctx->pc = 0x2556D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2556d0;
        }
    }
    ctx->pc = 0x255738u;
label_255738:
    // 0x255738: 0xa17c2  srl         $v0, $t2, 31
    ctx->pc = 0x255738u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x25573c: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x25573cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x255740: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x255740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x255744: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x255744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x255748: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x255748u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x25574c: 0x4602a541  sub.s       $f21, $f20, $f2
    ctx->pc = 0x25574cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x255750: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x255750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x255754: 0x6400021  bltz        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x255754u;
    {
        const bool branch_taken_0x255754 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x255758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255754u;
        // 0x255758: 0x4603a501  sub.s       $f20, $f20, $f3 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255754) {
            ctx->pc = 0x2557DCu;
            goto label_2557dc;
        }
    }
    ctx->pc = 0x25575Cu;
    // 0x25575c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x25575cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x255760: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x255760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x255764: 0x2448c77c  addiu       $t0, $v0, -0x3884
    ctx->pc = 0x255764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952828));
    // 0x255768: 0x2467c970  addiu       $a3, $v1, -0x3690
    ctx->pc = 0x255768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953328));
    // 0x25576c: 0x340bfde8  ori         $t3, $zero, 0xFDE8
    ctx->pc = 0x25576cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65000);
    // 0x255770: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x255770u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x255774: 0x25090004  addiu       $t1, $t0, 0x4
    ctx->pc = 0x255774u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_255778:
    // 0x255778: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x255778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x25577c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x25577cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x255780: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x255780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x255784: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x255784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x255788: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x255788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25578c: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x25578cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x255790: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x255790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255794: 0x4600a924  .word       0x4600A924                   # cvt.w.s     $f4, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x255794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x255798: 0xe4c40000  swc1        $f4, 0x0($a2)
    ctx->pc = 0x255798u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x25579c: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x25579cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x2557a0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2557a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557a4: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2557a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2557a8: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x2557a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2557ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2557acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557b0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2557b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2557b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2557b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557b8: 0x4600a124  .word       0x4600A124                   # cvt.w.s     $f4, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2557b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x2557bc: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x2557bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2557c0: 0x4602ad41  sub.s       $f21, $f21, $f2
    ctx->pc = 0x2557c0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x2557c4: 0xac8b0008  sw          $t3, 0x8($a0)
    ctx->pc = 0x2557c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 11));
    // 0x2557c8: 0x4603a501  sub.s       $f20, $f20, $f3
    ctx->pc = 0x2557c8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    // 0x2557cc: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x2557ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x2557d0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2557d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2557d4: 0x641ffe8  bgez        $s2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2557D4u;
    {
        const bool branch_taken_0x2557d4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2557D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557D4u;
        // 0x2557d8: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557d4) {
            ctx->pc = 0x255778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255778;
        }
    }
    ctx->pc = 0x2557DCu;
label_2557dc:
    // 0x2557dc: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x2557dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2557e0:
    // 0x2557e0: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x2557e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2557e4: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x2557e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2557e8: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x2557e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2557ec: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x2557ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2557f0: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x2557f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2557f4: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x2557f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2557f8: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x2557f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2557fc: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x2557fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x255800: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x255800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x255804: 0xc7b80130  lwc1        $f24, 0x130($sp)
    ctx->pc = 0x255804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x255808: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x255808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25580c: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x25580cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x255810: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x255810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x255814: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x255814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x255818: 0x3e00008  jr          $ra
    ctx->pc = 0x255818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255818u;
        // 0x25581c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255820u;
}
