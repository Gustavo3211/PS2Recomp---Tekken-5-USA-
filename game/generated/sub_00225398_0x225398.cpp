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

// Function: sub_00225398
// Address: 0x225398 - 0x225768
void sub_00225398_0x225398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225398_0x225398");
#endif

    switch (ctx->pc) {
        case 0x2253dcu: goto label_2253dc;
        case 0x22540cu: goto label_22540c;
        case 0x225420u: goto label_225420;
        case 0x2254acu: goto label_2254ac;
        case 0x2254e8u: goto label_2254e8;
        case 0x225500u: goto label_225500;
        case 0x225558u: goto label_225558;
        case 0x225580u: goto label_225580;
        case 0x22560cu: goto label_22560c;
        case 0x225634u: goto label_225634;
        case 0x225664u: goto label_225664;
        case 0x22567cu: goto label_22567c;
        case 0x225690u: goto label_225690;
        case 0x2256acu: goto label_2256ac;
        case 0x2256d4u: goto label_2256d4;
        case 0x2256e4u: goto label_2256e4;
        case 0x225704u: goto label_225704;
        case 0x225718u: goto label_225718;
        default: break;
    }

    ctx->pc = 0x225398u;

    // 0x225398: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x225398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22539c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22539cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2253a0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2253a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2253a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2253a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253a8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2253a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2253ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2253acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2253b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253b4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2253b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2253b8: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2253b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2253bc: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2253bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2253c0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2253c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2253c4: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2253c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2253c8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2253c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2253cc: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2253ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2253d0: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2253d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2253d4: 0xc04a151  jal         func_128544
    ctx->pc = 0x2253D4u;
    SET_GPR_U32(ctx, 31, 0x2253DCu);
    ctx->pc = 0x2253D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2253D4u;
    // 0x2253d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2253D4u, 0x2253DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2253DCu;
label_2253dc:
    // 0x2253dc: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2253dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2253e0: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2253e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x2253e4: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x2253e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2253e8: 0x24692d50  addiu       $t1, $v1, 0x2D50
    ctx->pc = 0x2253e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 11600));
    // 0x2253ec: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x2253ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2253f0: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x2253f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2253f4: 0xb2a20007  sdl         $v0, 0x7($s5)
    ctx->pc = 0x2253f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2253f8: 0xb6a20000  sdr         $v0, 0x0($s5)
    ctx->pc = 0x2253f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2253fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2253fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225404: 0xc04a151  jal         func_128544
    ctx->pc = 0x225404u;
    SET_GPR_U32(ctx, 31, 0x22540Cu);
    ctx->pc = 0x225408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225404u;
    // 0x225408: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x225404u, 0x22540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22540Cu;
label_22540c:
    // 0x22540c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22540cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225410: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x225410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x225414: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x225414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x225418: 0xc04a151  jal         func_128544
    ctx->pc = 0x225418u;
    SET_GPR_U32(ctx, 31, 0x225420u);
    ctx->pc = 0x22541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225418u;
    // 0x22541c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x225418u, 0x225420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225420u;
label_225420:
    // 0x225420: 0x86830042  lh          $v1, 0x42($s4)
    ctx->pc = 0x225420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 66)));
    // 0x225424: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x225424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x225428: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x225428u;
    {
        const bool branch_taken_0x225428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225428u;
        // 0x22542c: 0x96840042  lhu         $a0, 0x42($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225428) {
            ctx->pc = 0x225450u;
            goto label_225450;
        }
    }
    ctx->pc = 0x225430u;
    // 0x225430: 0x86020042  lh          $v0, 0x42($s0)
    ctx->pc = 0x225430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x225434: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x225434u;
    {
        const bool branch_taken_0x225434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x225438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225434u;
        // 0x225438: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225434) {
            ctx->pc = 0x225454u;
            goto label_225454;
        }
    }
    ctx->pc = 0x22543Cu;
    // 0x22543c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x22543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x225440: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x225440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x225444: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x225444u;
    {
        const bool branch_taken_0x225444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225444u;
        // 0x225448: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225444) {
            ctx->pc = 0x2254A4u;
            goto label_2254a4;
        }
    }
    ctx->pc = 0x22544Cu;
    // 0x22544c: 0x0  nop
    ctx->pc = 0x22544cu;
    // NOP
label_225450:
    // 0x225450: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x225450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_225454:
    // 0x225454: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x225454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x225458: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x225458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x22545c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22545Cu;
    {
        const bool branch_taken_0x22545c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22545Cu;
        // 0x225460: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22545c) {
            ctx->pc = 0x225478u;
            goto label_225478;
        }
    }
    ctx->pc = 0x225464u;
    // 0x225464: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x225464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x225468: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x225468u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x22546c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x22546cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x225470: 0x96840042  lhu         $a0, 0x42($s4)
    ctx->pc = 0x225470u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 66)));
    // 0x225474: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x225474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_225478:
    // 0x225478: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x225478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x22547c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x22547cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x225480: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x225480u;
    {
        const bool branch_taken_0x225480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x225480) {
            ctx->pc = 0x225484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225480u;
            // 0x225484: 0x86020042  lh          $v0, 0x42($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225494u;
            goto label_225494;
        }
    }
    ctx->pc = 0x225488u;
    // 0x225488: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x225488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x22548c: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x22548cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x225490: 0x86020042  lh          $v0, 0x42($s0)
    ctx->pc = 0x225490u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
label_225494:
    // 0x225494: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x225494u;
    {
        const bool branch_taken_0x225494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x225498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225494u;
        // 0x225498: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225494) {
            ctx->pc = 0x2254A8u;
            goto label_2254a8;
        }
    }
    ctx->pc = 0x22549Cu;
    // 0x22549c: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x22549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x2254a0: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2254a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_2254a4:
    // 0x2254a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2254a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2254a8:
    // 0x2254a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2254a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2254ac:
    // 0x2254ac: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x2254acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2254b0: 0x0  nop
    ctx->pc = 0x2254b0u;
    // NOP
    // 0x2254b4: 0x0  nop
    ctx->pc = 0x2254b4u;
    // NOP
    // 0x2254b8: 0x0  nop
    ctx->pc = 0x2254b8u;
    // NOP
    // 0x2254bc: 0x0  nop
    ctx->pc = 0x2254bcu;
    // NOP
    // 0x2254c0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2254C0u;
    {
        const bool branch_taken_0x2254c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2254C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254C0u;
        // 0x2254c4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254c0) {
            ctx->pc = 0x2254ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2254ac;
        }
    }
    ctx->pc = 0x2254C8u;
    // 0x2254c8: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2254c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2254cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2254ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254d0: 0x244b6194  addiu       $t3, $v0, 0x6194
    ctx->pc = 0x2254d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 24980));
    // 0x2254d4: 0x3c160015  lui         $s6, 0x15
    ctx->pc = 0x2254d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)21 << 16));
    // 0x2254d8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2254d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254dc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2254dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2254e0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2254e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254e4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2254e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2254e8:
    // 0x2254e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2254e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254ec: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x2254ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2254f0: 0x1423021  addu        $a2, $t2, $v0
    ctx->pc = 0x2254f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2254f4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2254f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2254f8: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2254f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254fc: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x2254fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_225500:
    // 0x225500: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225500u;
    {
        const bool branch_taken_0x225500 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x225504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225500u;
        // 0x225504: 0x265208d0  addiu       $s2, $s2, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225500) {
            ctx->pc = 0x225520u;
            goto label_225520;
        }
    }
    ctx->pc = 0x225508u;
    // 0x225508: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x225508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x22550c: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x22550cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x225510: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x225510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x225514: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x225514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x225518: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x225518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x22551c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x22551cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_225520:
    // 0x225520: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x225520u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x225524: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x225524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x225528: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x225528u;
    {
        const bool branch_taken_0x225528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225528) {
            ctx->pc = 0x22552Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225528u;
            // 0x22552c: 0x8e420044  lw          $v0, 0x44($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225500;
        }
    }
    ctx->pc = 0x225530u;
    // 0x225530: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x225530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x225534: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x225534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x225538: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x225538u;
    {
        const bool branch_taken_0x225538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225538u;
        // 0x22553c: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225538) {
            ctx->pc = 0x2254E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2254e8;
        }
    }
    ctx->pc = 0x225540u;
    // 0x225540: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x225540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x225544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225548: 0x244e6194  addiu       $t6, $v0, 0x6194
    ctx->pc = 0x225548u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 24980));
    // 0x22554c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22554cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225550: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x225550u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x225554: 0x0  nop
    ctx->pc = 0x225554u;
    // NOP
label_225558:
    // 0x225558: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x225558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22555c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225560: 0x5460001a  bnel        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x225560u;
    {
        const bool branch_taken_0x225560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x225560) {
            ctx->pc = 0x225564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225560u;
            // 0x225564: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2255CCu;
            goto label_2255cc;
        }
    }
    ctx->pc = 0x225568u;
    // 0x225568: 0xae6821  addu        $t5, $a1, $t6
    ctx->pc = 0x225568u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x22556c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22556cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225570: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x225570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225574: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x225574u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225578: 0x2a0602d  daddu       $t4, $s5, $zero
    ctx->pc = 0x225578u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22557c: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x22557cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_225580:
    // 0x225580: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x225580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x225584: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x225584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x225588: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x225588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x22558c: 0x1623821  addu        $a3, $t3, $v0
    ctx->pc = 0x22558cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x225590: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x225590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x225594: 0x2a690002  slti        $t1, $s3, 0x2
    ctx->pc = 0x225594u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x225598: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x225598u;
    {
        const bool branch_taken_0x225598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225598u;
        // 0x22559c: 0x1823021  addu        $a2, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225598) {
            ctx->pc = 0x2255C0u;
            goto label_2255c0;
        }
    }
    ctx->pc = 0x2255A0u;
    // 0x2255a0: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x2255a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2255a4: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2255a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2255a8: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x2255a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x2255ac: 0x8e830044  lw          $v1, 0x44($s4)
    ctx->pc = 0x2255acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x2255b0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x2255b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2255b4: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x2255b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x2255b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2255B8u;
    {
        const bool branch_taken_0x2255b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2255BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255B8u;
        // 0x2255bc: 0xacea0000  sw          $t2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255b8) {
            ctx->pc = 0x2255C8u;
            goto label_2255c8;
        }
    }
    ctx->pc = 0x2255C0u;
label_2255c0:
    // 0x2255c0: 0x1520ffef  bnez        $t1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2255C0u;
    {
        const bool branch_taken_0x2255c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2255C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255C0u;
        // 0x2255c4: 0x265208d0  addiu       $s2, $s2, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255c0) {
            ctx->pc = 0x225580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225580;
        }
    }
    ctx->pc = 0x2255C8u;
label_2255c8:
    // 0x2255c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2255c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2255cc:
    // 0x2255cc: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x2255ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2255d0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2255D0u;
    {
        const bool branch_taken_0x2255d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2255D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255D0u;
        // 0x2255d4: 0x82880  sll         $a1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255d0) {
            ctx->pc = 0x225558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225558;
        }
    }
    ctx->pc = 0x2255D8u;
    // 0x2255d8: 0x26c46190  addiu       $a0, $s6, 0x6190
    ctx->pc = 0x2255d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 24976));
    // 0x2255dc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2255dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2255e0: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x2255e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2255e4: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x2255e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x2255e8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2255E8u;
    {
        const bool branch_taken_0x2255e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2255ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255E8u;
        // 0x2255ec: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255e8) {
            ctx->pc = 0x225604u;
            goto label_225604;
        }
    }
    ctx->pc = 0x2255F0u;
    // 0x2255f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2255F0u;
    {
        const bool branch_taken_0x2255f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2255F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255F0u;
        // 0x2255f4: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255f0) {
            ctx->pc = 0x225604u;
            goto label_225604;
        }
    }
    ctx->pc = 0x2255F8u;
    // 0x2255f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2255F8u;
    {
        const bool branch_taken_0x2255f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2255FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255F8u;
        // 0x2255fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255f8) {
            ctx->pc = 0x225604u;
            goto label_225604;
        }
    }
    ctx->pc = 0x225600u;
    // 0x225600: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x225600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_225604:
    // 0x225604: 0xc040534  jal         func_1014D0
    ctx->pc = 0x225604u;
    SET_GPR_U32(ctx, 31, 0x22560Cu);
    ctx->pc = 0x225608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225604u;
    // 0x225608: 0x26d16190  addiu       $s1, $s6, 0x6190 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 24976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014D0u, 0x225604u, 0x22560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22560Cu;
label_22560c:
    // 0x22560c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22560cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x225610: 0x3c100004  lui         $s0, 0x4
    ctx->pc = 0x225610u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4 << 16));
    // 0x225614: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x225614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x225618: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x225618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x22561c: 0x38840018  xori        $a0, $a0, 0x18
    ctx->pc = 0x22561cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)24);
    // 0x225620: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x225620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x225624: 0x36108800  ori         $s0, $s0, 0x8800
    ctx->pc = 0x225624u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)34816);
    // 0x225628: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x225628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22562c: 0xc040534  jal         func_1014D0
    ctx->pc = 0x22562Cu;
    SET_GPR_U32(ctx, 31, 0x225634u);
    ctx->pc = 0x225630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22562Cu;
    // 0x225630: 0x64800b  movn        $s0, $v1, $a0 (Delay Slot)
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014D0u, 0x22562Cu, 0x225634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225634u;
label_225634:
    // 0x225634: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x225634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225638: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x225638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22563c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x22563cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x225640: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x225640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x225644: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225648: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x225648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22564c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22564cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x225650: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x225650u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225654: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x225654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225658: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x225658u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x22565c: 0xc0404b2  jal         func_1012C8
    ctx->pc = 0x22565Cu;
    SET_GPR_U32(ctx, 31, 0x225664u);
    ctx->pc = 0x225660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22565Cu;
    // 0x225660: 0x24150031  addiu       $s5, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012C8u, 0x22565Cu, 0x225664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225664u;
label_225664:
    // 0x225664: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x225664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x225668: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x225668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22566c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22566cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x225670: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x225670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x225674: 0xc0404b2  jal         func_1012C8
    ctx->pc = 0x225674u;
    SET_GPR_U32(ctx, 31, 0x22567Cu);
    ctx->pc = 0x225678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225674u;
    // 0x225678: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012C8u, 0x225674u, 0x22567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22567Cu;
label_22567c:
    // 0x22567c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225680: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x225680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x225684: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x225684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x225688: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x225688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x22568c: 0x0  nop
    ctx->pc = 0x22568cu;
    // NOP
label_225690:
    // 0x225690: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x225690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x225694: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x225694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x225698: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x225698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22569c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22569cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2256a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2256a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256a4: 0xc0404be  jal         func_1012F8
    ctx->pc = 0x2256A4u;
    SET_GPR_U32(ctx, 31, 0x2256ACu);
    ctx->pc = 0x2256A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2256A4u;
    // 0x2256a8: 0x24510007  addiu       $s1, $v0, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012F8u, 0x2256A4u, 0x2256ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256ACu;
label_2256ac:
    // 0x2256ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2256acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2256b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256b4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2256b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2256b8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2256b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2256bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2256bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2256c0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2256C0u;
    {
        const bool branch_taken_0x2256c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2256C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256C0u;
        // 0x2256c4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256c0) {
            ctx->pc = 0x2256F0u;
            goto label_2256f0;
        }
    }
    ctx->pc = 0x2256C8u;
    // 0x2256c8: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x2256c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2256cc: 0xc09262e  jal         func_2498B8
    ctx->pc = 0x2256CCu;
    SET_GPR_U32(ctx, 31, 0x2256D4u);
    ctx->pc = 0x2256D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2256CCu;
    // 0x2256d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2498B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2498B8u, 0x2256CCu, 0x2256D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256D4u;
label_2256d4:
    // 0x2256d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2256d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256d8: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x2256d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2256dc: 0xc089700  jal         func_225C00
    ctx->pc = 0x2256DCu;
    SET_GPR_U32(ctx, 31, 0x2256E4u);
    ctx->pc = 0x2256E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2256DCu;
    // 0x2256e0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C00u, 0x2256DCu, 0x2256E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256E4u;
label_2256e4:
    // 0x2256e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2256E4u;
    {
        const bool branch_taken_0x2256e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2256E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256E4u;
        // 0x2256e8: 0x8ec26190  lw          $v0, 0x6190($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256e4) {
            ctx->pc = 0x22571Cu;
            goto label_22571c;
        }
    }
    ctx->pc = 0x2256ECu;
    // 0x2256ec: 0x0  nop
    ctx->pc = 0x2256ecu;
    // NOP
label_2256f0:
    // 0x2256f0: 0x8fc283c0  lw          $v0, -0x7C40($fp)
    ctx->pc = 0x2256f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294935488)));
    // 0x2256f4: 0x86500042  lh          $s0, 0x42($s2)
    ctx->pc = 0x2256f4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x2256f8: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x2256f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x2256fc: 0xc089972  jal         func_2265C8
    ctx->pc = 0x2256FCu;
    SET_GPR_U32(ctx, 31, 0x225704u);
    ctx->pc = 0x225700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2256FCu;
    // 0x225700: 0x2a2800a  movz        $s0, $s5, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265C8u, 0x2256FCu, 0x225704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225704u;
label_225704:
    // 0x225704: 0x8e460044  lw          $a2, 0x44($s2)
    ctx->pc = 0x225704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x225708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22570c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22570cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225710: 0xc089636  jal         func_2258D8
    ctx->pc = 0x225710u;
    SET_GPR_U32(ctx, 31, 0x225718u);
    ctx->pc = 0x225714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225710u;
    // 0x225714: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x225710u, 0x225718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225718u;
label_225718:
    // 0x225718: 0x8ec26190  lw          $v0, 0x6190($s6)
    ctx->pc = 0x225718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24976)));
label_22571c:
    // 0x22571c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22571Cu;
    {
        const bool branch_taken_0x22571c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22571Cu;
        // 0x225720: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22571c) {
            ctx->pc = 0x225738u;
            goto label_225738;
        }
    }
    ctx->pc = 0x225724u;
    // 0x225724: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x225724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x225728: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x225728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22572c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x22572Cu;
    {
        const bool branch_taken_0x22572c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22572Cu;
        // 0x225730: 0x265208d0  addiu       $s2, $s2, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22572c) {
            ctx->pc = 0x225690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225690;
        }
    }
    ctx->pc = 0x225734u;
    // 0x225734: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x225734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_225738:
    // 0x225738: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x225738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22573c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x22573cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x225740: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x225740u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x225744: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x225744u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x225748: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x225748u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x22574c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x22574cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x225750: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x225750u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x225754: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x225754u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x225758: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x225758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22575c: 0x3e00008  jr          $ra
    ctx->pc = 0x22575Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22575Cu;
        // 0x225760: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22575Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225764u;
    // 0x225764: 0x0  nop
    ctx->pc = 0x225764u;
    // NOP
    ctx->pc = 0x225768u;
}
