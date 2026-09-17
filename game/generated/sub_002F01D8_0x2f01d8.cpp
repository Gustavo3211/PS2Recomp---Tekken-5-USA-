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

// Function: sub_002F01D8
// Address: 0x2f01d8 - 0x2f02b0
void sub_002F01D8_0x2f01d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F01D8_0x2f01d8");
#endif

    switch (ctx->pc) {
        case 0x2f01d8u: goto label_2f01d8;
        case 0x2f01dcu: goto label_2f01dc;
        case 0x2f01e0u: goto label_2f01e0;
        case 0x2f01e4u: goto label_2f01e4;
        case 0x2f01e8u: goto label_2f01e8;
        case 0x2f01ecu: goto label_2f01ec;
        case 0x2f01f0u: goto label_2f01f0;
        case 0x2f01f4u: goto label_2f01f4;
        case 0x2f01f8u: goto label_2f01f8;
        case 0x2f01fcu: goto label_2f01fc;
        case 0x2f0200u: goto label_2f0200;
        case 0x2f0204u: goto label_2f0204;
        case 0x2f0208u: goto label_2f0208;
        case 0x2f020cu: goto label_2f020c;
        case 0x2f0210u: goto label_2f0210;
        case 0x2f0214u: goto label_2f0214;
        case 0x2f0218u: goto label_2f0218;
        case 0x2f021cu: goto label_2f021c;
        case 0x2f0220u: goto label_2f0220;
        case 0x2f0224u: goto label_2f0224;
        case 0x2f0228u: goto label_2f0228;
        case 0x2f022cu: goto label_2f022c;
        case 0x2f0230u: goto label_2f0230;
        case 0x2f0234u: goto label_2f0234;
        case 0x2f0238u: goto label_2f0238;
        case 0x2f023cu: goto label_2f023c;
        case 0x2f0240u: goto label_2f0240;
        case 0x2f0244u: goto label_2f0244;
        case 0x2f0248u: goto label_2f0248;
        case 0x2f024cu: goto label_2f024c;
        case 0x2f0250u: goto label_2f0250;
        case 0x2f0254u: goto label_2f0254;
        case 0x2f0258u: goto label_2f0258;
        case 0x2f025cu: goto label_2f025c;
        case 0x2f0260u: goto label_2f0260;
        case 0x2f0264u: goto label_2f0264;
        case 0x2f0268u: goto label_2f0268;
        case 0x2f026cu: goto label_2f026c;
        case 0x2f0270u: goto label_2f0270;
        case 0x2f0274u: goto label_2f0274;
        case 0x2f0278u: goto label_2f0278;
        case 0x2f027cu: goto label_2f027c;
        case 0x2f0280u: goto label_2f0280;
        case 0x2f0284u: goto label_2f0284;
        case 0x2f0288u: goto label_2f0288;
        case 0x2f028cu: goto label_2f028c;
        case 0x2f0290u: goto label_2f0290;
        case 0x2f0294u: goto label_2f0294;
        case 0x2f0298u: goto label_2f0298;
        case 0x2f029cu: goto label_2f029c;
        case 0x2f02a0u: goto label_2f02a0;
        case 0x2f02a4u: goto label_2f02a4;
        case 0x2f02a8u: goto label_2f02a8;
        case 0x2f02acu: goto label_2f02ac;
        default: break;
    }

    ctx->pc = 0x2f01d8u;

label_2f01d8:
    // 0x2f01d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f01d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2f01dc:
    // 0x2f01dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f01dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2f01e0:
    // 0x2f01e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f01e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f01e4:
    // 0x2f01e4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2f01e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2f01e8:
    // 0x2f01e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f01e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f01ec:
    // 0x2f01ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f01ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2f01f0:
    // 0x2f01f0: 0x10000017  b           . + 4 + (0x17 << 2)
label_2f01f4:
    if (ctx->pc == 0x2F01F4u) {
        ctx->pc = 0x2F01F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F01F0u;
        // 0x2f01f4: 0xffa50000  sd          $a1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F01F8u;
        goto label_2f01f8;
    }
    ctx->pc = 0x2F01F0u;
    {
        const bool branch_taken_0x2f01f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F01F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F01F0u;
        // 0x2f01f4: 0xffa50000  sd          $a1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f01f0) {
            ctx->pc = 0x2F0250u;
            goto label_2f0250;
        }
    }
    ctx->pc = 0x2F01F8u;
label_2f01f8:
    // 0x2f01f8: 0x4a0000b  bltz        $a1, . + 4 + (0xB << 2)
label_2f01fc:
    if (ctx->pc == 0x2F01FCu) {
        ctx->pc = 0x2F01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F01F8u;
        // 0x2f01fc: 0x87a20004  lh          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0200u;
        goto label_2f0200;
    }
    ctx->pc = 0x2F01F8u;
    {
        const bool branch_taken_0x2f01f8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F01F8u;
        // 0x2f01fc: 0x87a20004  lh          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f01f8) {
            ctx->pc = 0x2F0228u;
            goto label_2f0228;
        }
    }
    ctx->pc = 0x2F0200u;
label_2f0200:
    // 0x2f0200: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2f0200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2f0204:
    // 0x2f0204: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2f0204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2f0208:
    // 0x2f0208: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f0208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f020c:
    // 0x2f020c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f020cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f0210:
    // 0x2f0210: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x2f0210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2f0214:
    // 0x2f0214: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x2f0214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2f0218:
    // 0x2f0218: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2f0218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f021c:
    // 0x2f021c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2f021cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f0220:
    // 0x2f0220: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f0224:
    if (ctx->pc == 0x2F0224u) {
        ctx->pc = 0x2F0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0220u;
        // 0x2f0224: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0228u;
        goto label_2f0228;
    }
    ctx->pc = 0x2F0220u;
    {
        const bool branch_taken_0x2f0220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0220u;
        // 0x2f0224: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0220) {
            ctx->pc = 0x2F022Cu;
            goto label_2f022c;
        }
    }
    ctx->pc = 0x2F0228u;
label_2f0228:
    // 0x2f0228: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2f0228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f022c:
    // 0x2f022c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_2f0230:
    if (ctx->pc == 0x2F0230u) {
        ctx->pc = 0x2F0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F022Cu;
        // 0x2f0230: 0x87a30000  lh          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0234u;
        goto label_2f0234;
    }
    ctx->pc = 0x2F022Cu;
    {
        const bool branch_taken_0x2f022c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F022Cu;
        // 0x2f0230: 0x87a30000  lh          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f022c) {
            ctx->pc = 0x2F0240u;
            goto label_2f0240;
        }
    }
    ctx->pc = 0x2F0234u;
label_2f0234:
    // 0x2f0234: 0x87a20010  lh          $v0, 0x10($sp)
    ctx->pc = 0x2f0234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0238:
    // 0x2f0238: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f023c:
    if (ctx->pc == 0x2F023Cu) {
        ctx->pc = 0x2F023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0238u;
        // 0x2f023c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0240u;
        goto label_2f0240;
    }
    ctx->pc = 0x2F0238u;
    {
        const bool branch_taken_0x2f0238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0238u;
        // 0x2f023c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0238) {
            ctx->pc = 0x2F0244u;
            goto label_2f0244;
        }
    }
    ctx->pc = 0x2F0240u;
label_2f0240:
    // 0x2f0240: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f0240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f0244:
    // 0x2f0244: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x2f0244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2f0248:
    // 0x2f0248: 0xe0f809  jalr        $a3
label_2f024c:
    if (ctx->pc == 0x2F024Cu) {
        ctx->pc = 0x2F024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0248u;
        // 0x2f024c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0250u;
        goto label_2f0250;
    }
    ctx->pc = 0x2F0248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2F0250u);
        ctx->pc = 0x2F024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0248u;
        // 0x2f024c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0248u, 0x2F0250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0250u;
label_2f0250:
    // 0x2f0250: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x2f0250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_2f0254:
    // 0x2f0254: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2f0258:
    if (ctx->pc == 0x2F0258u) {
        ctx->pc = 0x2F0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0254u;
        // 0x2f0258: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F025Cu;
        goto label_2f025c;
    }
    ctx->pc = 0x2F0254u;
    {
        const bool branch_taken_0x2f0254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0254) {
            ctx->pc = 0x2F0258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0254u;
            // 0x2f0258: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F029Cu;
            goto label_2f029c;
        }
    }
    ctx->pc = 0x2F025Cu;
label_2f025c:
    // 0x2f025c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2f025cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2f0260:
    // 0x2f0260: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f0260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2f0264:
    // 0x2f0264: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2f0264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2f0268:
    // 0x2f0268: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f0268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f026c:
    // 0x2f026c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f0270:
    if (ctx->pc == 0x2F0270u) {
        ctx->pc = 0x2F0270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F026Cu;
        // 0x2f0270: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0274u;
        goto label_2f0274;
    }
    ctx->pc = 0x2F026Cu;
    {
        const bool branch_taken_0x2f026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F026Cu;
        // 0x2f0270: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f026c) {
            ctx->pc = 0x2F0284u;
            goto label_2f0284;
        }
    }
    ctx->pc = 0x2F0274u;
label_2f0274:
    // 0x2f0274: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f0274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2f0278:
    // 0x2f0278: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f0278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2f027c:
    // 0x2f027c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f0280:
    if (ctx->pc == 0x2F0280u) {
        ctx->pc = 0x2F0284u;
        goto label_2f0284;
    }
    ctx->pc = 0x2F027Cu;
    {
        const bool branch_taken_0x2f027c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f027c) {
            ctx->pc = 0x2F0290u;
            goto label_2f0290;
        }
    }
    ctx->pc = 0x2F0284u;
label_2f0284:
    // 0x2f0284: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f0284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2f0288:
    // 0x2f0288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f028c:
    // 0x2f028c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f028cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2f0290:
    // 0x2f0290: 0x14c0ffd9  bnez        $a2, . + 4 + (-0x27 << 2)
label_2f0294:
    if (ctx->pc == 0x2F0294u) {
        ctx->pc = 0x2F0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0290u;
        // 0x2f0294: 0x87a50002  lh          $a1, 0x2($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0298u;
        goto label_2f0298;
    }
    ctx->pc = 0x2F0290u;
    {
        const bool branch_taken_0x2f0290 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0290u;
        // 0x2f0294: 0x87a50002  lh          $a1, 0x2($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0290) {
            ctx->pc = 0x2F01F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f01f8;
        }
    }
    ctx->pc = 0x2F0298u;
label_2f0298:
    // 0x2f0298: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f0298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f029c:
    // 0x2f029c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2f029cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f02a0:
    // 0x2f02a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f02a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f02a4:
    // 0x2f02a4: 0x3e00008  jr          $ra
label_2f02a8:
    if (ctx->pc == 0x2F02A8u) {
        ctx->pc = 0x2F02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F02A4u;
        // 0x2f02a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F02ACu;
        goto label_2f02ac;
    }
    ctx->pc = 0x2F02A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F02A4u;
        // 0x2f02a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F02A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F02ACu;
label_2f02ac:
    // 0x2f02ac: 0x0  nop
    ctx->pc = 0x2f02acu;
    // NOP
    ctx->pc = 0x2f02b0u;
}
