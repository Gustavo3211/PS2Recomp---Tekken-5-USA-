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

// Function: sub_002530A8
// Address: 0x2530a8 - 0x253730
void sub_002530A8_0x2530a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002530A8_0x2530a8");
#endif

    switch (ctx->pc) {
        case 0x2531a0u: goto label_2531a0;
        case 0x253234u: goto label_253234;
        case 0x253514u: goto label_253514;
        case 0x253520u: goto label_253520;
        case 0x253558u: goto label_253558;
        case 0x253560u: goto label_253560;
        case 0x253670u: goto label_253670;
        case 0x2536a8u: goto label_2536a8;
        default: break;
    }

    ctx->pc = 0x2530a8u;

    // 0x2530a8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2530a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2530ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2530acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2530b0: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2530b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2530b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2530b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2530b8: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2530b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x2530bc: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2530bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2530c0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2530c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2530c4: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2530c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2530c8: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2530c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2530cc: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x2530ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x2530d0: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2530d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2530d4: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x2530d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x2530d8: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2530d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2530dc: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x2530dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x2530e0: 0xe7bb0118  swc1        $f27, 0x118($sp)
    ctx->pc = 0x2530e0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2530e4: 0xe7ba0110  swc1        $f26, 0x110($sp)
    ctx->pc = 0x2530e4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2530e8: 0xe7b90108  swc1        $f25, 0x108($sp)
    ctx->pc = 0x2530e8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2530ec: 0xe7b80100  swc1        $f24, 0x100($sp)
    ctx->pc = 0x2530ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2530f0: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x2530f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2530f4: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x2530f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2530f8: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2530f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2530fc: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2530fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x253100: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x253100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x253104: 0x86350008  lh          $s5, 0x8($s1)
    ctx->pc = 0x253104u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x253108: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x253108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x25310c: 0x2ea20067  sltiu       $v0, $s5, 0x67
    ctx->pc = 0x25310cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)103) ? 1 : 0);
    // 0x253110: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x253110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x253114: 0x2a2180b  movn        $v1, $s5, $v0
    ctx->pc = 0x253114u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 21));
    // 0x253118: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x253118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25311c: 0x3c130016  lui         $s3, 0x16
    ctx->pc = 0x25311cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)22 << 16));
    // 0x253120: 0x26737f70  addiu       $s3, $s3, 0x7F70
    ctx->pc = 0x253120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32624));
    // 0x253124: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x253124u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x253128: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x253128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x25312c: 0x1040016c  beqz        $v0, . + 4 + (0x16C << 2)
    ctx->pc = 0x25312Cu;
    {
        const bool branch_taken_0x25312c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25312Cu;
        // 0x253130: 0x9230000b  lbu         $s0, 0xB($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25312c) {
            ctx->pc = 0x2536E0u;
            goto label_2536e0;
        }
    }
    ctx->pc = 0x253134u;
    // 0x253134: 0x4e0000d  bltz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x253134u;
    {
        const bool branch_taken_0x253134 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x253138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253134u;
        // 0x253138: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253134) {
            ctx->pc = 0x25316Cu;
            goto label_25316c;
        }
    }
    ctx->pc = 0x25313Cu;
    // 0x25313c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25313cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x253140: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x253140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253144: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x253144u;
    {
        const bool branch_taken_0x253144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x253144) {
            ctx->pc = 0x253148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253144u;
            // 0x253148: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253160u;
            goto label_253160;
        }
    }
    ctx->pc = 0x25314Cu;
    // 0x25314c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x25314cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x253150: 0x24120041  addiu       $s2, $zero, 0x41
    ctx->pc = 0x253150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x253154: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x253154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x253158: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253158u;
    {
        const bool branch_taken_0x253158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253158u;
        // 0x25315c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253158) {
            ctx->pc = 0x253168u;
            goto label_253168;
        }
    }
    ctx->pc = 0x253160u;
label_253160:
    // 0x253160: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253164: 0x24120042  addiu       $s2, $zero, 0x42
    ctx->pc = 0x253164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_253168:
    // 0x253168: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x253168u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_25316c:
    // 0x25316c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x25316cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x253170: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x253170u;
    {
        const bool branch_taken_0x253170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253170u;
        // 0x253174: 0x8e760004  lw          $s6, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253170) {
            ctx->pc = 0x2531C0u;
            goto label_2531c0;
        }
    }
    ctx->pc = 0x253178u;
    // 0x253178: 0x52c00012  beql        $s6, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x253178u;
    {
        const bool branch_taken_0x253178 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x253178) {
            ctx->pc = 0x25317Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253178u;
            // 0x25317c: 0x8624001e  lh          $a0, 0x1E($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2531C4u;
            goto label_2531c4;
        }
    }
    ctx->pc = 0x253180u;
    // 0x253180: 0x96de0006  lhu         $fp, 0x6($s6)
    ctx->pc = 0x253180u;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x253184: 0x2bc2000b  slti        $v0, $fp, 0xB
    ctx->pc = 0x253184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x253188: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253188u;
    {
        const bool branch_taken_0x253188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253188u;
        // 0x25318c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253188) {
            ctx->pc = 0x253198u;
            goto label_253198;
        }
    }
    ctx->pc = 0x253190u;
    // 0x253190: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x253190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x253194: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x253194u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_253198:
    // 0x253198: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x253198u;
    SET_GPR_U32(ctx, 31, 0x2531A0u);
    ctx->pc = 0x25319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253198u;
    // 0x25319c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x253198u, 0x2531A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2531A0u;
label_2531a0:
    // 0x2531a0: 0x32030080  andi        $v1, $s0, 0x80
    ctx->pc = 0x2531a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x2531a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2531a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2531a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2531a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2531ac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2531ACu;
    {
        const bool branch_taken_0x2531ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531ACu;
        // 0x2531b0: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531ac) {
            ctx->pc = 0x2531D0u;
            goto label_2531d0;
        }
    }
    ctx->pc = 0x2531B4u;
    // 0x2531b4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2531b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2531b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2531B8u;
    {
        const bool branch_taken_0x2531b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531B8u;
        // 0x2531bc: 0x2429025  or          $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531b8) {
            ctx->pc = 0x2531D0u;
            goto label_2531d0;
        }
    }
    ctx->pc = 0x2531C0u;
label_2531c0:
    // 0x2531c0: 0x8624001e  lh          $a0, 0x1E($s1)
    ctx->pc = 0x2531c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_2531c4:
    // 0x2531c4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2531c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2531c8: 0x863e001c  lh          $fp, 0x1C($s1)
    ctx->pc = 0x2531c8u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2531cc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2531ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_2531d0:
    // 0x2531d0: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x2531d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x2531d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2531D4u;
    {
        const bool branch_taken_0x2531d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531D4u;
        // 0x2531d8: 0x3c020080  lui         $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531d4) {
            ctx->pc = 0x2531E0u;
            goto label_2531e0;
        }
    }
    ctx->pc = 0x2531DCu;
    // 0x2531dc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x2531dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_2531e0:
    // 0x2531e0: 0x32020040  andi        $v0, $s0, 0x40
    ctx->pc = 0x2531e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
    // 0x2531e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2531E4u;
    {
        const bool branch_taken_0x2531e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531E4u;
        // 0x2531e8: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531e4) {
            ctx->pc = 0x2531F0u;
            goto label_2531f0;
        }
    }
    ctx->pc = 0x2531ECu;
    // 0x2531ec: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x2531ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_2531f0:
    // 0x2531f0: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x2531f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    // 0x2531f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2531F4u;
    {
        const bool branch_taken_0x2531f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531F4u;
        // 0x2531f8: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531f4) {
            ctx->pc = 0x253200u;
            goto label_253200;
        }
    }
    ctx->pc = 0x2531FCu;
    // 0x2531fc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x2531fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_253200:
    // 0x253200: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x253200u;
    {
        const bool branch_taken_0x253200 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x253204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253200u;
        // 0x253204: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253200) {
            ctx->pc = 0x25321Cu;
            goto label_25321c;
        }
    }
    ctx->pc = 0x253208u;
    // 0x253208: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25320c: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25320Cu;
    {
        const bool branch_taken_0x25320c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x253210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25320Cu;
        // 0x253210: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25320c) {
            ctx->pc = 0x25321Cu;
            goto label_25321c;
        }
    }
    ctx->pc = 0x253214u;
    // 0x253214: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x253214u;
    {
        const bool branch_taken_0x253214 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x253214) {
            ctx->pc = 0x253220u;
            goto label_253220;
        }
    }
    ctx->pc = 0x25321Cu;
label_25321c:
    // 0x25321c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253220:
    // 0x253220: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x253220u;
    {
        const bool branch_taken_0x253220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253220u;
        // 0x253224: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253220) {
            ctx->pc = 0x2532E8u;
            goto label_2532e8;
        }
    }
    ctx->pc = 0x253228u;
    // 0x253228: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x253228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25322c: 0xc08c19c  jal         func_230670
    ctx->pc = 0x25322Cu;
    SET_GPR_U32(ctx, 31, 0x253234u);
    ctx->pc = 0x253230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25322Cu;
    // 0x253230: 0xc4b40004  lwc1        $f20, 0x4($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x230670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230670u, 0x25322Cu, 0x253234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253234u;
label_253234:
    // 0x253234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253238: 0xc78189c0  lwc1        $f1, -0x7640($gp)
    ctx->pc = 0x253238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25323c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25323cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253240: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x253240u;
    {
        const bool branch_taken_0x253240 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x253244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253240u;
        // 0x253244: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253240) {
            ctx->pc = 0x253250u;
            goto label_253250;
        }
    }
    ctx->pc = 0x253248u;
    // 0x253248: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x253248u;
    {
        const bool branch_taken_0x253248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253248u;
        // 0x25324c: 0x4601a000  add.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253248) {
            ctx->pc = 0x253254u;
            goto label_253254;
        }
    }
    ctx->pc = 0x253250u;
label_253250:
    // 0x253250: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x253250u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_253254:
    // 0x253254: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x253254u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x253258: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x253258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25325c: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25325cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x253260: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x253260u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253264: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x253264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x253268: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x253268u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x25326c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x25326cu;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253270: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x253270u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x253274: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x253274u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x253278: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x253278u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x25327c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x25327cu;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253280: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x253280u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x253284: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x253284u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x253288: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x253288u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25328c: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x25328cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x253290: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x253290u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x253294: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x253294u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x253298: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x253298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25329c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25329cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2532a0: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x2532a0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
    // 0x2532a4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2532a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2532a8: 0x4600001d  msub.s      $f0, $f0, $f0
    ctx->pc = 0x2532a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2532ac: 0x46000084  c1          0x84
    ctx->pc = 0x2532acu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x2532b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2532b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2532b4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2532b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2532b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2532B8u;
    {
        const bool branch_taken_0x2532b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2532b8) {
            ctx->pc = 0x2532BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2532B8u;
            // 0x2532bc: 0x46001087  neg.s       $f2, $f2 (Delay Slot)
            ctx->f[2] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2532C0u;
            goto label_2532c0;
        }
    }
    ctx->pc = 0x2532C0u;
label_2532c0:
    // 0x2532c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2532c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2532c4: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x2532c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x2532c8: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2532c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2532cc: 0x46012d1c  madd.s      $f20, $f5, $f1
    ctx->pc = 0x2532ccu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x2532d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2532d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2532d4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2532d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2532d8: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x2532D8u;
    {
        const bool branch_taken_0x2532d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2532d8) {
            ctx->pc = 0x2532DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2532D8u;
            // 0x2532dc: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25333Cu;
            goto label_25333c;
        }
    }
    ctx->pc = 0x2532E0u;
    // 0x2532e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2532E0u;
    {
        const bool branch_taken_0x2532e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2532E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532E0u;
        // 0x2532e4: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2532e0) {
            ctx->pc = 0x253334u;
            goto label_253334;
        }
    }
    ctx->pc = 0x2532E8u;
label_2532e8:
    // 0x2532e8: 0x26a2fff2  addiu       $v0, $s5, -0xE
    ctx->pc = 0x2532e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967282));
    // 0x2532ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2532ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2532f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2532F0u;
    {
        const bool branch_taken_0x2532f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2532F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532F0u;
        // 0x2532f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2532f0) {
            ctx->pc = 0x25330Cu;
            goto label_25330c;
        }
    }
    ctx->pc = 0x2532F8u;
    // 0x2532f8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2532f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2532fc: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2532FCu;
    {
        const bool branch_taken_0x2532fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x253300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532FCu;
        // 0x253300: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2532fc) {
            ctx->pc = 0x25330Cu;
            goto label_25330c;
        }
    }
    ctx->pc = 0x253304u;
    // 0x253304: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x253304u;
    {
        const bool branch_taken_0x253304 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x253304) {
            ctx->pc = 0x253310u;
            goto label_253310;
        }
    }
    ctx->pc = 0x25330Cu;
label_25330c:
    // 0x25330c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253310:
    // 0x253310: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x253310u;
    {
        const bool branch_taken_0x253310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253310u;
        // 0x253314: 0x8fa20064  lw          $v0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253310) {
            ctx->pc = 0x253338u;
            goto label_253338;
        }
    }
    ctx->pc = 0x253318u;
    // 0x253318: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x253318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25331c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253320: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x253320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x253324: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253328: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x253328u;
    {
        const bool branch_taken_0x253328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253328u;
        // 0x25332c: 0x2429025  or          $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253328) {
            ctx->pc = 0x253338u;
            goto label_253338;
        }
    }
    ctx->pc = 0x253330u;
    // 0x253330: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x253330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_253334:
    // 0x253334: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x253334u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_253338:
    // 0x253338: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x253338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_25333c:
    // 0x25333c: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x25333cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x253340: 0x86240010  lh          $a0, 0x10($s1)
    ctx->pc = 0x253340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x253344: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x253344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253348: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x253348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25334c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x25334cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x253350: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x253350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x253354: 0x8662000c  lh          $v0, 0xC($s3)
    ctx->pc = 0x253354u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x253358: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x253358u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25335c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x25335cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x253360: 0x86240014  lh          $a0, 0x14($s1)
    ctx->pc = 0x253360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x253364: 0xc78089c4  lwc1        $f0, -0x763C($gp)
    ctx->pc = 0x253364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253368: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x253368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25336c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25336cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x253370: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x253370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x253374: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x253374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x253378: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253378u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25337c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x25337cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x253380: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x253380u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x253384: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x253384u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x253388: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x253388u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x25338c: 0xe7a4004c  swc1        $f4, 0x4C($sp)
    ctx->pc = 0x25338cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x253390: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x253390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x253394: 0x4483d800  mtc1        $v1, $f27
    ctx->pc = 0x253394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x253398: 0x4680dee0  cvt.s.w     $f27, $f27
    ctx->pc = 0x253398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[27], sizeof(tmp)); ctx->f[27] = FPU_CVT_S_W(tmp); }
    // 0x25339c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x25339cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2533a0: 0x4484d000  mtc1        $a0, $f26
    ctx->pc = 0x2533a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x2533a4: 0x4680d6a0  cvt.s.w     $f26, $f26
    ctx->pc = 0x2533a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[26], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x2533a8: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2533a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2533ac: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x2533acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2533b0: 0x8a230007  lwl         $v1, 0x7($s1)
    ctx->pc = 0x2533b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2533b4: 0x9a230004  lwr         $v1, 0x4($s1)
    ctx->pc = 0x2533b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2533b8: 0xaba30053  swl         $v1, 0x53($sp)
    ctx->pc = 0x2533b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 83); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2533bc: 0xbba30050  swr         $v1, 0x50($sp)
    ctx->pc = 0x2533bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2533c0: 0x9223000a  lbu         $v1, 0xA($s1)
    ctx->pc = 0x2533c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2533c4: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x2533c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x2533c8: 0x86240016  lh          $a0, 0x16($s1)
    ctx->pc = 0x2533c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x2533cc: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2533ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2533d0: 0x86250018  lh          $a1, 0x18($s1)
    ctx->pc = 0x2533d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2533d4: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x2533d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x2533d8: 0x8622001a  lh          $v0, 0x1A($s1)
    ctx->pc = 0x2533d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x2533dc: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2533DCu;
    {
        const bool branch_taken_0x2533dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2533E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533DCu;
        // 0x2533e0: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533dc) {
            ctx->pc = 0x2533ECu;
            goto label_2533ec;
        }
    }
    ctx->pc = 0x2533E4u;
    // 0x2533e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2533e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2533e8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x2533e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_2533ec:
    // 0x2533ec: 0x32170002  andi        $s7, $s0, 0x2
    ctx->pc = 0x2533ecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x2533f0: 0x12e00046  beqz        $s7, . + 4 + (0x46 << 2)
    ctx->pc = 0x2533F0u;
    {
        const bool branch_taken_0x2533f0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2533F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533F0u;
        // 0x2533f4: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533f0) {
            ctx->pc = 0x25350Cu;
            goto label_25350c;
        }
    }
    ctx->pc = 0x2533F8u;
    // 0x2533f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2533F8u;
    {
        const bool branch_taken_0x2533f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2533FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533F8u;
        // 0x2533fc: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533f8) {
            ctx->pc = 0x253404u;
            goto label_253404;
        }
    }
    ctx->pc = 0x253400u;
    // 0x253400: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x253400u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_253404:
    // 0x253404: 0x86220028  lh          $v0, 0x28($s1)
    ctx->pc = 0x253404u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x253408: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x253408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x25340c: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x25340cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x253410: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x253410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x253414: 0x8222002b  lb          $v0, 0x2B($s1)
    ctx->pc = 0x253414u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x253418: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x253418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25341c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25341cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x253420: 0x8223002c  lb          $v1, 0x2C($s1)
    ctx->pc = 0x253420u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x253424: 0x9224002d  lbu         $a0, 0x2D($s1)
    ctx->pc = 0x253424u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
    // 0x253428: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x253428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x25342c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x25342cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x253430: 0x82250023  lb          $a1, 0x23($s1)
    ctx->pc = 0x253430u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x253434: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x253434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x253438: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x253438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x25343c: 0xc78a89c8  lwc1        $f10, -0x7638($gp)
    ctx->pc = 0x25343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x253440: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x253440u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x253444: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x253444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x253448: 0xc78089cc  lwc1        $f0, -0x7634($gp)
    ctx->pc = 0x253448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25344c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x25344cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x253450: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x253450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x253454: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x253454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x253458: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x253458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25345c: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x25345cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x253460: 0xc78089d0  lwc1        $f0, -0x7630($gp)
    ctx->pc = 0x253460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253464: 0x92230021  lbu         $v1, 0x21($s1)
    ctx->pc = 0x253464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x253468: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x253468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x25346c: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x25346cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x253470: 0x92240022  lbu         $a0, 0x22($s1)
    ctx->pc = 0x253470u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x253474: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x253474u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x253478: 0xc78689d4  lwc1        $f6, -0x762C($gp)
    ctx->pc = 0x253478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25347c: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x25347cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x253480: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x253480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x253484: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x253484u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253488: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25348c: 0x9624003e  lhu         $a0, 0x3E($s1)
    ctx->pc = 0x25348cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
    // 0x253490: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x253490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x253494: 0x9622003a  lhu         $v0, 0x3A($s1)
    ctx->pc = 0x253494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x253498: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x253498u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x25349c: 0x9229002e  lbu         $t1, 0x2E($s1)
    ctx->pc = 0x25349cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x2534a0: 0x460a18c2  mul.s       $f3, $f3, $f10
    ctx->pc = 0x2534a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x2534a4: 0x96280026  lhu         $t0, 0x26($s1)
    ctx->pc = 0x2534a4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x2534a8: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2534a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2534ac: 0x96270024  lhu         $a3, 0x24($s1)
    ctx->pc = 0x2534acu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2534b0: 0x92250032  lbu         $a1, 0x32($s1)
    ctx->pc = 0x2534b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x2534b4: 0x96260038  lhu         $a2, 0x38($s1)
    ctx->pc = 0x2534b4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2534b8: 0x9623003c  lhu         $v1, 0x3C($s1)
    ctx->pc = 0x2534b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2534bc: 0xa7a20036  sh          $v0, 0x36($sp)
    ctx->pc = 0x2534bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x2534c0: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x2534c0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2534c4: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x2534c4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2534c8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2534c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2534cc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2534ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2534d0: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x2534d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2534d4: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x2534d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2534d8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2534d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2534dc: 0xa7a90028  sh          $t1, 0x28($sp)
    ctx->pc = 0x2534dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 9));
    // 0x2534e0: 0xa7a80024  sh          $t0, 0x24($sp)
    ctx->pc = 0x2534e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 36), (uint16_t)GPR_U32(ctx, 8));
    // 0x2534e4: 0xa7a70026  sh          $a3, 0x26($sp)
    ctx->pc = 0x2534e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 7));
    // 0x2534e8: 0xa3a5002a  sb          $a1, 0x2A($sp)
    ctx->pc = 0x2534e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 42), (uint8_t)GPR_U32(ctx, 5));
    // 0x2534ec: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2534ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2534f0: 0xa7a60034  sh          $a2, 0x34($sp)
    ctx->pc = 0x2534f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 6));
    // 0x2534f4: 0xa7a30038  sh          $v1, 0x38($sp)
    ctx->pc = 0x2534f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x2534f8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2534f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2534fc: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x2534fcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x253500: 0xa7a4003a  sh          $a0, 0x3A($sp)
    ctx->pc = 0x253500u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 58), (uint16_t)GPR_U32(ctx, 4));
    // 0x253504: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x253504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x253508: 0xa3a2002b  sb          $v0, 0x2B($sp)
    ctx->pc = 0x253508u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 43), (uint8_t)GPR_U32(ctx, 2));
label_25350c:
    // 0x25350c: 0xc0940ca  jal         func_250328
    ctx->pc = 0x25350Cu;
    SET_GPR_U32(ctx, 31, 0x253514u);
    ctx->pc = 0x253510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25350Cu;
    // 0x253510: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250328u, 0x25350Cu, 0x253514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253514u;
label_253514:
    // 0x253514: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x253514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x253518: 0xc0940d0  jal         func_250340
    ctx->pc = 0x253518u;
    SET_GPR_U32(ctx, 31, 0x253520u);
    ctx->pc = 0x25351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253518u;
    // 0x25351c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250340u, 0x253518u, 0x253520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253520u;
label_253520:
    // 0x253520: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x253520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x253524: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x253524u;
    {
        const bool branch_taken_0x253524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253524u;
        // 0x253528: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253524) {
            ctx->pc = 0x25353Cu;
            goto label_25353c;
        }
    }
    ctx->pc = 0x25352Cu;
    // 0x25352c: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x25352Cu;
    {
        const bool branch_taken_0x25352c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x25352c) {
            ctx->pc = 0x25353Cu;
            goto label_25353c;
        }
    }
    ctx->pc = 0x253534u;
    // 0x253534: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x253534u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253538: 0x36940080  ori         $s4, $s4, 0x80
    ctx->pc = 0x253538u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)128);
label_25353c:
    // 0x25353c: 0x1bc00068  blez        $fp, . + 4 + (0x68 << 2)
    ctx->pc = 0x25353Cu;
    {
        const bool branch_taken_0x25353c = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x253540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25353Cu;
        // 0x253540: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25353c) {
            ctx->pc = 0x2536E0u;
            goto label_2536e0;
        }
    }
    ctx->pc = 0x253544u;
    // 0x253544: 0xc79789d8  lwc1        $f23, -0x7628($gp)
    ctx->pc = 0x253544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x253548: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x253548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25354c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x25354cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x253550: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x253550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x253554: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x253554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_253558:
    // 0x253558: 0xc0937c4  jal         func_24DF10
    ctx->pc = 0x253558u;
    SET_GPR_U32(ctx, 31, 0x253560u);
    ctx->pc = 0x25355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253558u;
    // 0x25355c: 0x8fa40084  lw          $a0, 0x84($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF10u, 0x253558u, 0x253560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253560u;
label_253560:
    // 0x253560: 0xc78089dc  lwc1        $f0, -0x7624($gp)
    ctx->pc = 0x253560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253564: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x253564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x253568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25356c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x25356cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253570: 0x1200005b  beqz        $s0, . + 4 + (0x5B << 2)
    ctx->pc = 0x253570u;
    {
        const bool branch_taken_0x253570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x253574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253570u;
        // 0x253574: 0x51843  sra         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253570) {
            ctx->pc = 0x2536E0u;
            goto label_2536e0;
        }
    }
    ctx->pc = 0x253578u;
    // 0x253578: 0xa613004c  sh          $s3, 0x4C($s0)
    ctx->pc = 0x253578u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 19));
    // 0x25357c: 0xae120118  sw          $s2, 0x118($s0)
    ctx->pc = 0x25357cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 18));
    // 0x253580: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x253580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x253584: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x253584u;
    {
        const bool branch_taken_0x253584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x253584) {
            ctx->pc = 0x253588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253584u;
            // 0x253588: 0xa603004c  sh          $v1, 0x4C($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25358Cu;
            goto label_25358c;
        }
    }
    ctx->pc = 0x25358Cu;
label_25358c:
    // 0x25358c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x25358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x253590: 0xa6000064  sh          $zero, 0x64($s0)
    ctx->pc = 0x253590u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x253594: 0xa6020066  sh          $v0, 0x66($s0)
    ctx->pc = 0x253594u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 2));
    // 0x253598: 0xae150048  sw          $s5, 0x48($s0)
    ctx->pc = 0x253598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 21));
    // 0x25359c: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x25359cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2535a0: 0xa600006a  sh          $zero, 0x6A($s0)
    ctx->pc = 0x2535a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x2535a4: 0xa603006c  sh          $v1, 0x6C($s0)
    ctx->pc = 0x2535a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 3));
    // 0x2535a8: 0xae160060  sw          $s6, 0x60($s0)
    ctx->pc = 0x2535a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 22));
    // 0x2535ac: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2535acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2535b0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2535b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2535b4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2535b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2535b8: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x2535b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2535bc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2535bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2535c0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2535c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2535c4: 0x8ba20053  lwl         $v0, 0x53($sp)
    ctx->pc = 0x2535c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 83); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2535c8: 0x9ba20050  lwr         $v0, 0x50($sp)
    ctx->pc = 0x2535c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2535cc: 0xaa02005f  swl         $v0, 0x5F($s0)
    ctx->pc = 0x2535ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2535d0: 0xba02005c  swr         $v0, 0x5C($s0)
    ctx->pc = 0x2535d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 92); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2535d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2535d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2535d8: 0xa602004e  sh          $v0, 0x4E($s0)
    ctx->pc = 0x2535d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 2));
    // 0x2535dc: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x2535dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2535e0: 0xa603005a  sh          $v1, 0x5A($s0)
    ctx->pc = 0x2535e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 3));
    // 0x2535e4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2535e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2535e8: 0xa6040068  sh          $a0, 0x68($s0)
    ctx->pc = 0x2535e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x2535ec: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2535ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2535f0: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x2535f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2535f4: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x2535f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x2535f8: 0xa2050058  sb          $a1, 0x58($s0)
    ctx->pc = 0x2535f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 5));
    // 0x2535fc: 0xe61b0050  swc1        $f27, 0x50($s0)
    ctx->pc = 0x2535fcu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x253600: 0xe61a0054  swc1        $f26, 0x54($s0)
    ctx->pc = 0x253600u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x253604: 0xa2140059  sb          $s4, 0x59($s0)
    ctx->pc = 0x253604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 20));
    // 0x253608: 0x12e00031  beqz        $s7, . + 4 + (0x31 << 2)
    ctx->pc = 0x253608u;
    {
        const bool branch_taken_0x253608 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x25360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253608u;
        // 0x25360c: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253608) {
            ctx->pc = 0x2536D0u;
            goto label_2536d0;
        }
    }
    ctx->pc = 0x253610u;
    // 0x253610: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x253610u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253614: 0x92220030  lbu         $v0, 0x30($s1)
    ctx->pc = 0x253614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x253618: 0xfe0300c0  sd          $v1, 0xC0($s0)
    ctx->pc = 0x253618u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 192), GPR_U64(ctx, 3));
    // 0x25361c: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x25361cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x253620: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x253620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x253624: 0x8604004e  lh          $a0, 0x4E($s0)
    ctx->pc = 0x253624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x253628: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x253628u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25362c: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x25362cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x253630: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x253630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x253634: 0xfe0200c8  sd          $v0, 0xC8($s0)
    ctx->pc = 0x253634u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 200), GPR_U64(ctx, 2));
    // 0x253638: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x253638u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x25363c: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x25363cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253640: 0xfe0300d0  sd          $v1, 0xD0($s0)
    ctx->pc = 0x253640u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 208), GPR_U64(ctx, 3));
    // 0x253644: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x253644u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253648: 0xfe0200d8  sd          $v0, 0xD8($s0)
    ctx->pc = 0x253648u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 216), GPR_U64(ctx, 2));
    // 0x25364c: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x25364cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253650: 0xfe0300e0  sd          $v1, 0xE0($s0)
    ctx->pc = 0x253650u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 3));
    // 0x253654: 0xdfa20028  ld          $v0, 0x28($sp)
    ctx->pc = 0x253654u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253658: 0xfe0200e8  sd          $v0, 0xE8($s0)
    ctx->pc = 0x253658u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 2));
    // 0x25365c: 0xdfa30030  ld          $v1, 0x30($sp)
    ctx->pc = 0x25365cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253660: 0xfe0300f0  sd          $v1, 0xF0($s0)
    ctx->pc = 0x253660u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 3));
    // 0x253664: 0xdfa20038  ld          $v0, 0x38($sp)
    ctx->pc = 0x253664u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x253668: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x253668u;
    SET_GPR_U32(ctx, 31, 0x253670u);
    ctx->pc = 0x25366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253668u;
    // 0x25366c: 0xfe0200f8  sd          $v0, 0xF8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 248), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x253668u, 0x253670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253670u;
label_253670:
    // 0x253670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253674: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253678: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x253678u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[23];
    // 0x25367c: 0x46190001  sub.s       $f0, $f0, $f25
    ctx->pc = 0x25367cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x253680: 0x860200e4  lh          $v0, 0xE4($s0)
    ctx->pc = 0x253680u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x253684: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x253684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x253688: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x253688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x25368c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x25368cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x253690: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x253690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x253694: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x253694u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x253698: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x253698u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25369c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25369cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2536a0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2536A0u;
    SET_GPR_U32(ctx, 31, 0x2536A8u);
    ctx->pc = 0x2536A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2536A0u;
    // 0x2536a4: 0xa602004e  sh          $v0, 0x4E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2536A0u, 0x2536A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2536A8u;
label_2536a8:
    // 0x2536a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2536a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2536ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2536acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2536b0: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x2536b0u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[23];
    // 0x2536b4: 0x46190001  sub.s       $f0, $f0, $f25
    ctx->pc = 0x2536b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x2536b8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2536b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2536bc: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x2536bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x2536c0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2536c0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2536c4: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2536c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2536c8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2536c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2536cc: 0xa60200e4  sh          $v0, 0xE4($s0)
    ctx->pc = 0x2536ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 228), (uint16_t)GPR_U32(ctx, 2));
label_2536d0:
    // 0x2536d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2536d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2536d4: 0x27e102a  slt         $v0, $s3, $fp
    ctx->pc = 0x2536d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2536d8: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x2536D8u;
    {
        const bool branch_taken_0x2536d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2536d8) {
            ctx->pc = 0x253558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253558;
        }
    }
    ctx->pc = 0x2536E0u;
label_2536e0:
    // 0x2536e0: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2536e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2536e4: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2536e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2536e8: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2536e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2536ec: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2536ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2536f0: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2536f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2536f4: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x2536f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2536f8: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2536f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2536fc: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x2536fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x253700: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x253700u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x253704: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x253704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x253708: 0xc7bb0118  lwc1        $f27, 0x118($sp)
    ctx->pc = 0x253708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x25370c: 0xc7ba0110  lwc1        $f26, 0x110($sp)
    ctx->pc = 0x25370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x253710: 0xc7b90108  lwc1        $f25, 0x108($sp)
    ctx->pc = 0x253710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x253714: 0xc7b80100  lwc1        $f24, 0x100($sp)
    ctx->pc = 0x253714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x253718: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x253718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25371c: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x25371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x253720: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x253720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x253724: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x253724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x253728: 0x3e00008  jr          $ra
    ctx->pc = 0x253728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253728u;
        // 0x25372c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253730u;
}
