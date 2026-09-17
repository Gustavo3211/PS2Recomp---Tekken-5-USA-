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

// Function: sub_00261178
// Address: 0x261178 - 0x261338
void sub_00261178_0x261178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261178_0x261178");
#endif

    switch (ctx->pc) {
        case 0x261178u: goto label_261178;
        case 0x26117cu: goto label_26117c;
        case 0x261180u: goto label_261180;
        case 0x261184u: goto label_261184;
        case 0x261188u: goto label_261188;
        case 0x26118cu: goto label_26118c;
        case 0x261190u: goto label_261190;
        case 0x261194u: goto label_261194;
        case 0x261198u: goto label_261198;
        case 0x26119cu: goto label_26119c;
        case 0x2611a0u: goto label_2611a0;
        case 0x2611a4u: goto label_2611a4;
        case 0x2611a8u: goto label_2611a8;
        case 0x2611acu: goto label_2611ac;
        case 0x2611b0u: goto label_2611b0;
        case 0x2611b4u: goto label_2611b4;
        case 0x2611b8u: goto label_2611b8;
        case 0x2611bcu: goto label_2611bc;
        case 0x2611c0u: goto label_2611c0;
        case 0x2611c4u: goto label_2611c4;
        case 0x2611c8u: goto label_2611c8;
        case 0x2611ccu: goto label_2611cc;
        case 0x2611d0u: goto label_2611d0;
        case 0x2611d4u: goto label_2611d4;
        case 0x2611d8u: goto label_2611d8;
        case 0x2611dcu: goto label_2611dc;
        case 0x2611e0u: goto label_2611e0;
        case 0x2611e4u: goto label_2611e4;
        case 0x2611e8u: goto label_2611e8;
        case 0x2611ecu: goto label_2611ec;
        case 0x2611f0u: goto label_2611f0;
        case 0x2611f4u: goto label_2611f4;
        case 0x2611f8u: goto label_2611f8;
        case 0x2611fcu: goto label_2611fc;
        case 0x261200u: goto label_261200;
        case 0x261204u: goto label_261204;
        case 0x261208u: goto label_261208;
        case 0x26120cu: goto label_26120c;
        case 0x261210u: goto label_261210;
        case 0x261214u: goto label_261214;
        case 0x261218u: goto label_261218;
        case 0x26121cu: goto label_26121c;
        case 0x261220u: goto label_261220;
        case 0x261224u: goto label_261224;
        case 0x261228u: goto label_261228;
        case 0x26122cu: goto label_26122c;
        case 0x261230u: goto label_261230;
        case 0x261234u: goto label_261234;
        case 0x261238u: goto label_261238;
        case 0x26123cu: goto label_26123c;
        case 0x261240u: goto label_261240;
        case 0x261244u: goto label_261244;
        case 0x261248u: goto label_261248;
        case 0x26124cu: goto label_26124c;
        case 0x261250u: goto label_261250;
        case 0x261254u: goto label_261254;
        case 0x261258u: goto label_261258;
        case 0x26125cu: goto label_26125c;
        case 0x261260u: goto label_261260;
        case 0x261264u: goto label_261264;
        case 0x261268u: goto label_261268;
        case 0x26126cu: goto label_26126c;
        case 0x261270u: goto label_261270;
        case 0x261274u: goto label_261274;
        case 0x261278u: goto label_261278;
        case 0x26127cu: goto label_26127c;
        case 0x261280u: goto label_261280;
        case 0x261284u: goto label_261284;
        case 0x261288u: goto label_261288;
        case 0x26128cu: goto label_26128c;
        case 0x261290u: goto label_261290;
        case 0x261294u: goto label_261294;
        case 0x261298u: goto label_261298;
        case 0x26129cu: goto label_26129c;
        case 0x2612a0u: goto label_2612a0;
        case 0x2612a4u: goto label_2612a4;
        case 0x2612a8u: goto label_2612a8;
        case 0x2612acu: goto label_2612ac;
        case 0x2612b0u: goto label_2612b0;
        case 0x2612b4u: goto label_2612b4;
        case 0x2612b8u: goto label_2612b8;
        case 0x2612bcu: goto label_2612bc;
        case 0x2612c0u: goto label_2612c0;
        case 0x2612c4u: goto label_2612c4;
        case 0x2612c8u: goto label_2612c8;
        case 0x2612ccu: goto label_2612cc;
        case 0x2612d0u: goto label_2612d0;
        case 0x2612d4u: goto label_2612d4;
        case 0x2612d8u: goto label_2612d8;
        case 0x2612dcu: goto label_2612dc;
        case 0x2612e0u: goto label_2612e0;
        case 0x2612e4u: goto label_2612e4;
        case 0x2612e8u: goto label_2612e8;
        case 0x2612ecu: goto label_2612ec;
        case 0x2612f0u: goto label_2612f0;
        case 0x2612f4u: goto label_2612f4;
        case 0x2612f8u: goto label_2612f8;
        case 0x2612fcu: goto label_2612fc;
        case 0x261300u: goto label_261300;
        case 0x261304u: goto label_261304;
        case 0x261308u: goto label_261308;
        case 0x26130cu: goto label_26130c;
        case 0x261310u: goto label_261310;
        case 0x261314u: goto label_261314;
        case 0x261318u: goto label_261318;
        case 0x26131cu: goto label_26131c;
        case 0x261320u: goto label_261320;
        case 0x261324u: goto label_261324;
        case 0x261328u: goto label_261328;
        case 0x26132cu: goto label_26132c;
        case 0x261330u: goto label_261330;
        case 0x261334u: goto label_261334;
        default: break;
    }

    ctx->pc = 0x261178u;

label_261178:
    // 0x261178: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x261178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_26117c:
    // 0x26117c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x26117cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_261180:
    // 0x261180: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x261180u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
label_261184:
    // 0x261184: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x261184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_261188:
    // 0x261188: 0x262423b0  addiu       $a0, $s1, 0x23B0
    ctx->pc = 0x261188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9136));
label_26118c:
    // 0x26118c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x26118cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_261190:
    // 0x261190: 0x24820058  addiu       $v0, $a0, 0x58
    ctx->pc = 0x261190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_261194:
    // 0x261194: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x261194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_261198:
    // 0x261198: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x261198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_26119c:
    // 0x26119c: 0x14620061  bne         $v1, $v0, . + 4 + (0x61 << 2)
label_2611a0:
    if (ctx->pc == 0x2611A0u) {
        ctx->pc = 0x2611A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26119Cu;
        // 0x2611a0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2611A4u;
        goto label_2611a4;
    }
    ctx->pc = 0x26119Cu;
    {
        const bool branch_taken_0x26119c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2611A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26119Cu;
        // 0x2611a0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26119c) {
            ctx->pc = 0x261324u;
            goto label_261324;
        }
    }
    ctx->pc = 0x2611A4u;
label_2611a4:
    // 0x2611a4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2611a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_2611a8:
    // 0x2611a8: 0x2452e770  addiu       $s2, $v0, -0x1890
    ctx->pc = 0x2611a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961008));
label_2611ac:
    // 0x2611ac: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x2611acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_2611b0:
    // 0x2611b0: 0x5060001e  beql        $v1, $zero, . + 4 + (0x1E << 2)
label_2611b4:
    if (ctx->pc == 0x2611B4u) {
        ctx->pc = 0x2611B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611B0u;
        // 0x2611b4: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2611B8u;
        goto label_2611b8;
    }
    ctx->pc = 0x2611B0u;
    {
        const bool branch_taken_0x2611b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2611b0) {
            ctx->pc = 0x2611B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2611B0u;
            // 0x2611b4: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26122Cu;
            goto label_26122c;
        }
    }
    ctx->pc = 0x2611B8u;
label_2611b8:
    // 0x2611b8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2611b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2611bc:
    // 0x2611bc: 0xc097fdc  jal         func_25FF70
label_2611c0:
    if (ctx->pc == 0x2611C0u) {
        ctx->pc = 0x2611C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611BCu;
        // 0x2611c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2611C4u;
        goto label_2611c4;
    }
    ctx->pc = 0x2611BCu;
    SET_GPR_U32(ctx, 31, 0x2611C4u);
    ctx->pc = 0x2611C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611BCu;
    // 0x2611c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x2611BCu, 0x2611C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611C4u;
label_2611c4:
    // 0x2611c4: 0x8606001a  lh          $a2, 0x1A($s0)
    ctx->pc = 0x2611c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
label_2611c8:
    // 0x2611c8: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
label_2611cc:
    if (ctx->pc == 0x2611CCu) {
        ctx->pc = 0x2611CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611C8u;
        // 0x2611cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2611D0u;
        goto label_2611d0;
    }
    ctx->pc = 0x2611C8u;
    {
        const bool branch_taken_0x2611c8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2611CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611C8u;
        // 0x2611cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611c8) {
            ctx->pc = 0x261200u;
            goto label_261200;
        }
    }
    ctx->pc = 0x2611D0u;
label_2611d0:
    // 0x2611d0: 0x8602001c  lh          $v0, 0x1C($s0)
    ctx->pc = 0x2611d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_2611d4:
    // 0x2611d4: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2611d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2611d8:
    // 0x2611d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2611d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2611dc:
    // 0x2611dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2611dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2611e0:
    // 0x2611e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2611e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2611e4:
    // 0x2611e4: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x2611e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2611e8:
    // 0x2611e8: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x2611e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2611ec:
    // 0x2611ec: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2611ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2611f0:
    // 0x2611f0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2611f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2611f4:
    // 0x2611f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2611f8:
    if (ctx->pc == 0x2611F8u) {
        ctx->pc = 0x2611F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611F4u;
        // 0x2611f8: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2611FCu;
        goto label_2611fc;
    }
    ctx->pc = 0x2611F4u;
    {
        const bool branch_taken_0x2611f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2611F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611F4u;
        // 0x2611f8: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611f4) {
            ctx->pc = 0x261204u;
            goto label_261204;
        }
    }
    ctx->pc = 0x2611FCu;
label_2611fc:
    // 0x2611fc: 0x0  nop
    ctx->pc = 0x2611fcu;
    // NOP
label_261200:
    // 0x261200: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x261200u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_261204:
    // 0x261204: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_261208:
    if (ctx->pc == 0x261208u) {
        ctx->pc = 0x261208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261204u;
        // 0x261208: 0x86030018  lh          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26120Cu;
        goto label_26120c;
    }
    ctx->pc = 0x261204u;
    {
        const bool branch_taken_0x261204 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x261208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261204u;
        // 0x261208: 0x86030018  lh          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261204) {
            ctx->pc = 0x261218u;
            goto label_261218;
        }
    }
    ctx->pc = 0x26120Cu;
label_26120c:
    // 0x26120c: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x26120cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_261210:
    // 0x261210: 0x10000002  b           . + 4 + (0x2 << 2)
label_261214:
    if (ctx->pc == 0x261214u) {
        ctx->pc = 0x261214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261210u;
        // 0x261214: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261218u;
        goto label_261218;
    }
    ctx->pc = 0x261210u;
    {
        const bool branch_taken_0x261210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261210u;
        // 0x261214: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261210) {
            ctx->pc = 0x26121Cu;
            goto label_26121c;
        }
    }
    ctx->pc = 0x261218u;
label_261218:
    // 0x261218: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x261218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26121c:
    // 0x26121c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x26121cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_261220:
    // 0x261220: 0xe0f809  jalr        $a3
label_261224:
    if (ctx->pc == 0x261224u) {
        ctx->pc = 0x261224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261220u;
        // 0x261224: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261228u;
        goto label_261228;
    }
    ctx->pc = 0x261220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x261228u);
        ctx->pc = 0x261224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261220u;
        // 0x261224: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261220u, 0x261228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261228u;
label_261228:
    // 0x261228: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x261228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_26122c:
    // 0x26122c: 0x2452e7c0  addiu       $s2, $v0, -0x1840
    ctx->pc = 0x26122cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961088));
label_261230:
    // 0x261230: 0x8e4303d0  lw          $v1, 0x3D0($s2)
    ctx->pc = 0x261230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 976)));
label_261234:
    // 0x261234: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_261238:
    if (ctx->pc == 0x261238u) {
        ctx->pc = 0x261238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261234u;
        // 0x261238: 0x8e3023b0  lw          $s0, 0x23B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26123Cu;
        goto label_26123c;
    }
    ctx->pc = 0x261234u;
    {
        const bool branch_taken_0x261234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261234u;
        // 0x261238: 0x8e3023b0  lw          $s0, 0x23B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261234) {
            ctx->pc = 0x2612A8u;
            goto label_2612a8;
        }
    }
    ctx->pc = 0x26123Cu;
label_26123c:
    // 0x26123c: 0xc097fdc  jal         func_25FF70
label_261240:
    if (ctx->pc == 0x261240u) {
        ctx->pc = 0x261240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26123Cu;
        // 0x261240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261244u;
        goto label_261244;
    }
    ctx->pc = 0x26123Cu;
    SET_GPR_U32(ctx, 31, 0x261244u);
    ctx->pc = 0x261240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26123Cu;
    // 0x261240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x26123Cu, 0x261244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261244u;
label_261244:
    // 0x261244: 0x8606001a  lh          $a2, 0x1A($s0)
    ctx->pc = 0x261244u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
label_261248:
    // 0x261248: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
label_26124c:
    if (ctx->pc == 0x26124Cu) {
        ctx->pc = 0x26124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261248u;
        // 0x26124c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261250u;
        goto label_261250;
    }
    ctx->pc = 0x261248u;
    {
        const bool branch_taken_0x261248 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x26124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261248u;
        // 0x26124c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261248) {
            ctx->pc = 0x261280u;
            goto label_261280;
        }
    }
    ctx->pc = 0x261250u;
label_261250:
    // 0x261250: 0x8602001c  lh          $v0, 0x1C($s0)
    ctx->pc = 0x261250u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_261254:
    // 0x261254: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x261254u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_261258:
    // 0x261258: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x261258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26125c:
    // 0x26125c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261260:
    // 0x261260: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x261260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_261264:
    // 0x261264: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x261264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_261268:
    // 0x261268: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x261268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_26126c:
    // 0x26126c: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x26126cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_261270:
    // 0x261270: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x261270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_261274:
    // 0x261274: 0x10000003  b           . + 4 + (0x3 << 2)
label_261278:
    if (ctx->pc == 0x261278u) {
        ctx->pc = 0x261278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261274u;
        // 0x261278: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26127Cu;
        goto label_26127c;
    }
    ctx->pc = 0x261274u;
    {
        const bool branch_taken_0x261274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261274u;
        // 0x261278: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261274) {
            ctx->pc = 0x261284u;
            goto label_261284;
        }
    }
    ctx->pc = 0x26127Cu;
label_26127c:
    // 0x26127c: 0x0  nop
    ctx->pc = 0x26127cu;
    // NOP
label_261280:
    // 0x261280: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x261280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_261284:
    // 0x261284: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_261288:
    if (ctx->pc == 0x261288u) {
        ctx->pc = 0x261288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261284u;
        // 0x261288: 0x86030018  lh          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26128Cu;
        goto label_26128c;
    }
    ctx->pc = 0x261284u;
    {
        const bool branch_taken_0x261284 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x261288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261284u;
        // 0x261288: 0x86030018  lh          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261284) {
            ctx->pc = 0x261298u;
            goto label_261298;
        }
    }
    ctx->pc = 0x26128Cu;
label_26128c:
    // 0x26128c: 0x87a20010  lh          $v0, 0x10($sp)
    ctx->pc = 0x26128cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_261290:
    // 0x261290: 0x10000002  b           . + 4 + (0x2 << 2)
label_261294:
    if (ctx->pc == 0x261294u) {
        ctx->pc = 0x261294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261290u;
        // 0x261294: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261298u;
        goto label_261298;
    }
    ctx->pc = 0x261290u;
    {
        const bool branch_taken_0x261290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261290u;
        // 0x261294: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261290) {
            ctx->pc = 0x26129Cu;
            goto label_26129c;
        }
    }
    ctx->pc = 0x261298u;
label_261298:
    // 0x261298: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x261298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26129c:
    // 0x26129c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x26129cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2612a0:
    // 0x2612a0: 0xe0f809  jalr        $a3
label_2612a4:
    if (ctx->pc == 0x2612A4u) {
        ctx->pc = 0x2612A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612A0u;
        // 0x2612a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2612A8u;
        goto label_2612a8;
    }
    ctx->pc = 0x2612A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2612A8u);
        ctx->pc = 0x2612A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612A0u;
        // 0x2612a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2612A0u, 0x2612A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2612A8u;
label_2612a8:
    // 0x2612a8: 0x8e3023b0  lw          $s0, 0x23B0($s1)
    ctx->pc = 0x2612a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9136)));
label_2612ac:
    // 0x2612ac: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2612acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_2612b0:
    // 0x2612b0: 0x2451ebe8  addiu       $s1, $v0, -0x1418
    ctx->pc = 0x2612b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962152));
label_2612b4:
    // 0x2612b4: 0xc097fdc  jal         func_25FF70
label_2612b8:
    if (ctx->pc == 0x2612B8u) {
        ctx->pc = 0x2612B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612B4u;
        // 0x2612b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2612BCu;
        goto label_2612bc;
    }
    ctx->pc = 0x2612B4u;
    SET_GPR_U32(ctx, 31, 0x2612BCu);
    ctx->pc = 0x2612B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2612B4u;
    // 0x2612b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x2612B4u, 0x2612BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2612BCu;
label_2612bc:
    // 0x2612bc: 0x8606001a  lh          $a2, 0x1A($s0)
    ctx->pc = 0x2612bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
label_2612c0:
    // 0x2612c0: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
label_2612c4:
    if (ctx->pc == 0x2612C4u) {
        ctx->pc = 0x2612C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612C0u;
        // 0x2612c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2612C8u;
        goto label_2612c8;
    }
    ctx->pc = 0x2612C0u;
    {
        const bool branch_taken_0x2612c0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2612C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612C0u;
        // 0x2612c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2612c0) {
            ctx->pc = 0x2612F8u;
            goto label_2612f8;
        }
    }
    ctx->pc = 0x2612C8u;
label_2612c8:
    // 0x2612c8: 0x8602001c  lh          $v0, 0x1C($s0)
    ctx->pc = 0x2612c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_2612cc:
    // 0x2612cc: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2612ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2612d0:
    // 0x2612d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2612d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2612d4:
    // 0x2612d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2612d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2612d8:
    // 0x2612d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2612d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2612dc:
    // 0x2612dc: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x2612dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2612e0:
    // 0x2612e0: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x2612e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2612e4:
    // 0x2612e4: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x2612e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2612e8:
    // 0x2612e8: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x2612e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2612ec:
    // 0x2612ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_2612f0:
    if (ctx->pc == 0x2612F0u) {
        ctx->pc = 0x2612F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612ECu;
        // 0x2612f0: 0x8fa70024  lw          $a3, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2612F4u;
        goto label_2612f4;
    }
    ctx->pc = 0x2612ECu;
    {
        const bool branch_taken_0x2612ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2612F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612ECu;
        // 0x2612f0: 0x8fa70024  lw          $a3, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2612ec) {
            ctx->pc = 0x2612FCu;
            goto label_2612fc;
        }
    }
    ctx->pc = 0x2612F4u;
label_2612f4:
    // 0x2612f4: 0x0  nop
    ctx->pc = 0x2612f4u;
    // NOP
label_2612f8:
    // 0x2612f8: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x2612f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2612fc:
    // 0x2612fc: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_261300:
    if (ctx->pc == 0x261300u) {
        ctx->pc = 0x261300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612FCu;
        // 0x261300: 0x86030018  lh          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261304u;
        goto label_261304;
    }
    ctx->pc = 0x2612FCu;
    {
        const bool branch_taken_0x2612fc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x261300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612FCu;
        // 0x261300: 0x86030018  lh          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2612fc) {
            ctx->pc = 0x261310u;
            goto label_261310;
        }
    }
    ctx->pc = 0x261304u;
label_261304:
    // 0x261304: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x261304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_261308:
    // 0x261308: 0x10000002  b           . + 4 + (0x2 << 2)
label_26130c:
    if (ctx->pc == 0x26130Cu) {
        ctx->pc = 0x26130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261308u;
        // 0x26130c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261310u;
        goto label_261310;
    }
    ctx->pc = 0x261308u;
    {
        const bool branch_taken_0x261308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261308u;
        // 0x26130c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261308) {
            ctx->pc = 0x261314u;
            goto label_261314;
        }
    }
    ctx->pc = 0x261310u;
label_261310:
    // 0x261310: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x261310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_261314:
    // 0x261314: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x261314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_261318:
    // 0x261318: 0xe0f809  jalr        $a3
label_26131c:
    if (ctx->pc == 0x26131Cu) {
        ctx->pc = 0x26131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261318u;
        // 0x26131c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261320u;
        goto label_261320;
    }
    ctx->pc = 0x261318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x261320u);
        ctx->pc = 0x26131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261318u;
        // 0x26131c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261318u, 0x261320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261320u;
label_261320:
    // 0x261320: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x261320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_261324:
    // 0x261324: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x261324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_261328:
    // 0x261328: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x261328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26132c:
    // 0x26132c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x26132cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_261330:
    // 0x261330: 0x3e00008  jr          $ra
label_261334:
    if (ctx->pc == 0x261334u) {
        ctx->pc = 0x261334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261330u;
        // 0x261334: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261338u;
        goto label_fallthrough_0x261330;
    }
    ctx->pc = 0x261330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261330u;
        // 0x261334: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x261330:
    ctx->pc = 0x261338u;
}
