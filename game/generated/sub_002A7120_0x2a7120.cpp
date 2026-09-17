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

// Function: sub_002A7120
// Address: 0x2a7120 - 0x2a72d0
void sub_002A7120_0x2a7120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7120_0x2a7120");
#endif

    switch (ctx->pc) {
        case 0x2a72c0u: goto label_2a72c0;
        default: break;
    }

    ctx->pc = 0x2a7120u;

    // 0x2a7120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a7120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a7124: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a7124u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a7128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a712c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a7130: 0x8d060030  lw          $a2, 0x30($t0)
    ctx->pc = 0x2a7130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x2a7134: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7134u;
    {
        const bool branch_taken_0x2a7134 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7134u;
        // 0x2a7138: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7134) {
            ctx->pc = 0x2A7148u;
            goto label_2a7148;
        }
    }
    ctx->pc = 0x2A713Cu;
    // 0x2a713c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A713Cu;
    {
        const bool branch_taken_0x2a713c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A713Cu;
        // 0x2a7140: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a713c) {
            ctx->pc = 0x2A717Cu;
            goto label_2a717c;
        }
    }
    ctx->pc = 0x2A7144u;
    // 0x2a7144: 0x0  nop
    ctx->pc = 0x2a7144u;
    // NOP
label_2a7148:
    // 0x2a7148: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2a7148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2a714c: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A714Cu;
    {
        const bool branch_taken_0x2a714c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A714Cu;
        // 0x2a7150: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a714c) {
            ctx->pc = 0x2A7160u;
            goto label_2a7160;
        }
    }
    ctx->pc = 0x2A7154u;
    // 0x2a7154: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A7154u;
    {
        const bool branch_taken_0x2a7154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7154u;
        // 0x2a7158: 0x24070022  addiu       $a3, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7154) {
            ctx->pc = 0x2A717Cu;
            goto label_2a717c;
        }
    }
    ctx->pc = 0x2A715Cu;
    // 0x2a715c: 0x0  nop
    ctx->pc = 0x2a715cu;
    // NOP
label_2a7160:
    // 0x2a7160: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2a7160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2a7164: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2a7164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2a7168: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x2a7168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x2a716c: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x2a716cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2a7170: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x2a7170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x2a7174: 0x82380a  movz        $a3, $a0, $v0
    ctx->pc = 0x2a7174u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x2a7178: 0xa3380a  movz        $a3, $a1, $v1
    ctx->pc = 0x2a7178u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
label_2a717c:
    // 0x2a717c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a717cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a7180: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a7180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a7184: 0x34e20040  ori         $v0, $a3, 0x40
    ctx->pc = 0x2a7184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x2a7188: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x2a7188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a718c: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x2a718cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7190: 0x8d030034  lw          $v1, 0x34($t0)
    ctx->pc = 0x2a7190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x2a7194: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a7194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a7198: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a7198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a719c: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x2a719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a71a0: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x2a71a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x2a71a4: 0x8d040038  lw          $a0, 0x38($t0)
    ctx->pc = 0x2a71a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x2a71a8: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x2a71a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a71ac: 0x34e23000  ori         $v0, $a3, 0x3000
    ctx->pc = 0x2a71acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12288);
    // 0x2a71b0: 0x8d050048  lw          $a1, 0x48($t0)
    ctx->pc = 0x2a71b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x2a71b4: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x2a71b4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x2a71b8: 0x46030b80  add.s       $f14, $f1, $f3
    ctx->pc = 0x2a71b8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2a71bc: 0xc50b0028  lwc1        $f11, 0x28($t0)
    ctx->pc = 0x2a71bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2a71c0: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x2a71c0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a71c4: 0xc50c0024  lwc1        $f12, 0x24($t0)
    ctx->pc = 0x2a71c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a71c8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2a71c8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2a71cc: 0xc5010040  lwc1        $f1, 0x40($t0)
    ctx->pc = 0x2a71ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a71d0: 0x34e70200  ori         $a3, $a3, 0x200
    ctx->pc = 0x2a71d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)512);
    // 0x2a71d4: 0xc50a0010  lwc1        $f10, 0x10($t0)
    ctx->pc = 0x2a71d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a71d8: 0xc5090014  lwc1        $f9, 0x14($t0)
    ctx->pc = 0x2a71d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a71dc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a71dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a71e0: 0xc5080018  lwc1        $f8, 0x18($t0)
    ctx->pc = 0x2a71e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a71e4: 0xc507001c  lwc1        $f7, 0x1C($t0)
    ctx->pc = 0x2a71e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a71e8: 0xc5060020  lwc1        $f6, 0x20($t0)
    ctx->pc = 0x2a71e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a71ec: 0xc505002c  lwc1        $f5, 0x2C($t0)
    ctx->pc = 0x2a71ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a71f0: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A71F0u;
    {
        const bool branch_taken_0x2a71f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A71F0u;
        // 0x2a71f4: 0xc5040044  lwc1        $f4, 0x44($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a71f0) {
            ctx->pc = 0x2A7218u;
            goto label_2a7218;
        }
    }
    ctx->pc = 0x2A71F8u;
    // 0x2a71f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a71f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a71fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a71fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7200: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a7200u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a7204: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2a7204u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2a7208: 0x46015ac2  mul.s       $f11, $f11, $f1
    ctx->pc = 0x2a7208u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x2a720c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2a720cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a7210: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2a7210u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2a7214: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2a7214u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_2a7218:
    // 0x2a7218: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x2a7218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x2a721c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a721cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a7220: 0x24427060  addiu       $v0, $v0, 0x7060
    ctx->pc = 0x2a7220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28768));
    // 0x2a7224: 0xe4430064  swc1        $f3, 0x64($v0)
    ctx->pc = 0x2a7224u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70C4u, _value); } while (0); }
    // 0x2a7228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a7228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a722c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2a722cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D7060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7060u, _value); } while (0); }
    // 0x2a7230: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x2a7230u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D7064u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7064u, _value); } while (0); }
    // 0x2a7234: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2a7234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D7068u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7068u, _value); } while (0);
    // 0x2a7238: 0xe44a0010  swc1        $f10, 0x10($v0)
    ctx->pc = 0x2a7238u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D7070u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7070u, _value); } while (0); }
    // 0x2a723c: 0xe4490014  swc1        $f9, 0x14($v0)
    ctx->pc = 0x2a723cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D7074u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7074u, _value); } while (0); }
    // 0x2a7240: 0xe4480018  swc1        $f8, 0x18($v0)
    ctx->pc = 0x2a7240u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D7078u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7078u, _value); } while (0); }
    // 0x2a7244: 0xe447001c  swc1        $f7, 0x1C($v0)
    ctx->pc = 0x2a7244u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D707Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D707Cu, _value); } while (0); }
    // 0x2a7248: 0xe44d0060  swc1        $f13, 0x60($v0)
    ctx->pc = 0x2a7248u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70C0u, _value); } while (0); }
    // 0x2a724c: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x2a724cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D70C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70C8u, _value); } while (0);
    // 0x2a7250: 0xe4450024  swc1        $f5, 0x24($v0)
    ctx->pc = 0x2a7250u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D7084u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7084u, _value); } while (0); }
    // 0x2a7254: 0xe4460020  swc1        $f6, 0x20($v0)
    ctx->pc = 0x2a7254u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D7080u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7080u, _value); } while (0); }
    // 0x2a7258: 0xe44a0070  swc1        $f10, 0x70($v0)
    ctx->pc = 0x2a7258u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70D0u, _value); } while (0); }
    // 0x2a725c: 0xe4490074  swc1        $f9, 0x74($v0)
    ctx->pc = 0x2a725cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70D4u, _value); } while (0); }
    // 0x2a7260: 0xe4480078  swc1        $f8, 0x78($v0)
    ctx->pc = 0x2a7260u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70D8u, _value); } while (0); }
    // 0x2a7264: 0xe447007c  swc1        $f7, 0x7C($v0)
    ctx->pc = 0x2a7264u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70DCu, _value); } while (0); }
    // 0x2a7268: 0xe4450084  swc1        $f5, 0x84($v0)
    ctx->pc = 0x2a7268u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70E4u, _value); } while (0); }
    // 0x2a726c: 0xe4420030  swc1        $f2, 0x30($v0)
    ctx->pc = 0x2a726cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D7090u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7090u, _value); } while (0); }
    // 0x2a7270: 0xe4460050  swc1        $f6, 0x50($v0)
    ctx->pc = 0x2a7270u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70B0u, _value); } while (0); }
    // 0x2a7274: 0xe44d0090  swc1        $f13, 0x90($v0)
    ctx->pc = 0x2a7274u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70F0u, _value); } while (0); }
    // 0x2a7278: 0xe44e0094  swc1        $f14, 0x94($v0)
    ctx->pc = 0x2a7278u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70F4u, _value); } while (0); }
    // 0x2a727c: 0xe44a00a0  swc1        $f10, 0xA0($v0)
    ctx->pc = 0x2a727cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D7100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7100u, _value); } while (0); }
    // 0x2a7280: 0xe44900a4  swc1        $f9, 0xA4($v0)
    ctx->pc = 0x2a7280u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D7104u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7104u, _value); } while (0); }
    // 0x2a7284: 0xe44800a8  swc1        $f8, 0xA8($v0)
    ctx->pc = 0x2a7284u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D7108u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7108u, _value); } while (0); }
    // 0x2a7288: 0xe44700ac  swc1        $f7, 0xAC($v0)
    ctx->pc = 0x2a7288u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D710Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D710Cu, _value); } while (0); }
    // 0x2a728c: 0xe44b00b0  swc1        $f11, 0xB0($v0)
    ctx->pc = 0x2a728cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D7110u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7110u, _value); } while (0); }
    // 0x2a7290: 0xe44c00b4  swc1        $f12, 0xB4($v0)
    ctx->pc = 0x2a7290u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D7114u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7114u, _value); } while (0); }
    // 0x2a7294: 0xe44b0080  swc1        $f11, 0x80($v0)
    ctx->pc = 0x2a7294u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70E0u, _value); } while (0); }
    // 0x2a7298: 0xe44e0034  swc1        $f14, 0x34($v0)
    ctx->pc = 0x2a7298u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D7094u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7094u, _value); } while (0); }
    // 0x2a729c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2a729cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D7098u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D7098u, _value); } while (0);
    // 0x2a72a0: 0xe44a0040  swc1        $f10, 0x40($v0)
    ctx->pc = 0x2a72a0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70A0u, _value); } while (0); }
    // 0x2a72a4: 0xe4490044  swc1        $f9, 0x44($v0)
    ctx->pc = 0x2a72a4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70A4u, _value); } while (0); }
    // 0x2a72a8: 0xe4480048  swc1        $f8, 0x48($v0)
    ctx->pc = 0x2a72a8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70A8u, _value); } while (0); }
    // 0x2a72ac: 0xe447004c  swc1        $f7, 0x4C($v0)
    ctx->pc = 0x2a72acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70ACu, _value); } while (0); }
    // 0x2a72b0: 0xe44c0054  swc1        $f12, 0x54($v0)
    ctx->pc = 0x2a72b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D70B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70B4u, _value); } while (0); }
    // 0x2a72b4: 0xac400098  sw          $zero, 0x98($v0)
    ctx->pc = 0x2a72b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D70F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D70F8u, _value); } while (0);
    // 0x2a72b8: 0xc0c9700  jal         func_325C00
    ctx->pc = 0x2A72B8u;
    SET_GPR_U32(ctx, 31, 0x2A72C0u);
    ctx->pc = 0x2A72BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A72B8u;
    // 0x2a72bc: 0x8d06003c  lw          $a2, 0x3C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C00u, 0x2A72B8u, 0x2A72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A72C0u;
label_2a72c0:
    // 0x2a72c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a72c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a72c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A72C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72C4u;
        // 0x2a72c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A72C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A72CCu;
    // 0x2a72cc: 0x0  nop
    ctx->pc = 0x2a72ccu;
    // NOP
    ctx->pc = 0x2a72d0u;
}
