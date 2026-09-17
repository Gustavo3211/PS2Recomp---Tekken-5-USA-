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

// Function: sub_00261898
// Address: 0x261898 - 0x2619b0
void sub_00261898_0x261898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261898_0x261898");
#endif

    switch (ctx->pc) {
        case 0x261898u: goto label_261898;
        case 0x26189cu: goto label_26189c;
        case 0x2618a0u: goto label_2618a0;
        case 0x2618a4u: goto label_2618a4;
        case 0x2618a8u: goto label_2618a8;
        case 0x2618acu: goto label_2618ac;
        case 0x2618b0u: goto label_2618b0;
        case 0x2618b4u: goto label_2618b4;
        case 0x2618b8u: goto label_2618b8;
        case 0x2618bcu: goto label_2618bc;
        case 0x2618c0u: goto label_2618c0;
        case 0x2618c4u: goto label_2618c4;
        case 0x2618c8u: goto label_2618c8;
        case 0x2618ccu: goto label_2618cc;
        case 0x2618d0u: goto label_2618d0;
        case 0x2618d4u: goto label_2618d4;
        case 0x2618d8u: goto label_2618d8;
        case 0x2618dcu: goto label_2618dc;
        case 0x2618e0u: goto label_2618e0;
        case 0x2618e4u: goto label_2618e4;
        case 0x2618e8u: goto label_2618e8;
        case 0x2618ecu: goto label_2618ec;
        case 0x2618f0u: goto label_2618f0;
        case 0x2618f4u: goto label_2618f4;
        case 0x2618f8u: goto label_2618f8;
        case 0x2618fcu: goto label_2618fc;
        case 0x261900u: goto label_261900;
        case 0x261904u: goto label_261904;
        case 0x261908u: goto label_261908;
        case 0x26190cu: goto label_26190c;
        case 0x261910u: goto label_261910;
        case 0x261914u: goto label_261914;
        case 0x261918u: goto label_261918;
        case 0x26191cu: goto label_26191c;
        case 0x261920u: goto label_261920;
        case 0x261924u: goto label_261924;
        case 0x261928u: goto label_261928;
        case 0x26192cu: goto label_26192c;
        case 0x261930u: goto label_261930;
        case 0x261934u: goto label_261934;
        case 0x261938u: goto label_261938;
        case 0x26193cu: goto label_26193c;
        case 0x261940u: goto label_261940;
        case 0x261944u: goto label_261944;
        case 0x261948u: goto label_261948;
        case 0x26194cu: goto label_26194c;
        case 0x261950u: goto label_261950;
        case 0x261954u: goto label_261954;
        case 0x261958u: goto label_261958;
        case 0x26195cu: goto label_26195c;
        case 0x261960u: goto label_261960;
        case 0x261964u: goto label_261964;
        case 0x261968u: goto label_261968;
        case 0x26196cu: goto label_26196c;
        case 0x261970u: goto label_261970;
        case 0x261974u: goto label_261974;
        case 0x261978u: goto label_261978;
        case 0x26197cu: goto label_26197c;
        case 0x261980u: goto label_261980;
        case 0x261984u: goto label_261984;
        case 0x261988u: goto label_261988;
        case 0x26198cu: goto label_26198c;
        case 0x261990u: goto label_261990;
        case 0x261994u: goto label_261994;
        case 0x261998u: goto label_261998;
        case 0x26199cu: goto label_26199c;
        case 0x2619a0u: goto label_2619a0;
        case 0x2619a4u: goto label_2619a4;
        case 0x2619a8u: goto label_2619a8;
        case 0x2619acu: goto label_2619ac;
        default: break;
    }

    ctx->pc = 0x261898u;

label_261898:
    // 0x261898: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x261898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_26189c:
    // 0x26189c: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x26189cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2618a0:
    // 0x2618a0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2618a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_2618a4:
    // 0x2618a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2618a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2618a8:
    // 0x2618a8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2618a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_2618ac:
    // 0x2618ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2618acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2618b0:
    // 0x2618b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2618b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2618b4:
    // 0x2618b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2618b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2618b8:
    // 0x2618b8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2618b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_2618bc:
    // 0x2618bc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2618bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_2618c0:
    // 0x2618c0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2618c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2618c4:
    // 0x2618c4: 0xc097f3a  jal         func_25FCE8
label_2618c8:
    if (ctx->pc == 0x2618C8u) {
        ctx->pc = 0x2618C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618C4u;
        // 0x2618c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618CCu;
        goto label_2618cc;
    }
    ctx->pc = 0x2618C4u;
    SET_GPR_U32(ctx, 31, 0x2618CCu);
    ctx->pc = 0x2618C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2618C4u;
    // 0x2618c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCE8u, 0x2618C4u, 0x2618CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2618CCu;
label_2618cc:
    // 0x2618cc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2618ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2618d0:
    // 0x2618d0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2618d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2618d4:
    // 0x2618d4: 0x8c7123b0  lw          $s1, 0x23B0($v1)
    ctx->pc = 0x2618d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9136)));
label_2618d8:
    // 0x2618d8: 0xc097fdc  jal         func_25FF70
label_2618dc:
    if (ctx->pc == 0x2618DCu) {
        ctx->pc = 0x2618DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618D8u;
        // 0x2618dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618E0u;
        goto label_2618e0;
    }
    ctx->pc = 0x2618D8u;
    SET_GPR_U32(ctx, 31, 0x2618E0u);
    ctx->pc = 0x2618DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2618D8u;
    // 0x2618dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x2618D8u, 0x2618E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2618E0u;
label_2618e0:
    // 0x2618e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2618e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2618e4:
    // 0x2618e4: 0x86240022  lh          $a0, 0x22($s1)
    ctx->pc = 0x2618e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
label_2618e8:
    // 0x2618e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2618e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2618ec:
    // 0x2618ec: 0x480000c  bltz        $a0, . + 4 + (0xC << 2)
label_2618f0:
    if (ctx->pc == 0x2618F0u) {
        ctx->pc = 0x2618F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618ECu;
        // 0x2618f0: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618F4u;
        goto label_2618f4;
    }
    ctx->pc = 0x2618ECu;
    {
        const bool branch_taken_0x2618ec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2618F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618ECu;
        // 0x2618f0: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618ec) {
            ctx->pc = 0x261920u;
            goto label_261920;
        }
    }
    ctx->pc = 0x2618F4u;
label_2618f4:
    // 0x2618f4: 0x86220024  lh          $v0, 0x24($s1)
    ctx->pc = 0x2618f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_2618f8:
    // 0x2618f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2618f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2618fc:
    // 0x2618fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2618fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261900:
    // 0x261900: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x261900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_261904:
    // 0x261904: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x261904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_261908:
    // 0x261908: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x261908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_26190c:
    // 0x26190c: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x26190cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_261910:
    // 0x261910: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x261910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_261914:
    // 0x261914: 0x10000003  b           . + 4 + (0x3 << 2)
label_261918:
    if (ctx->pc == 0x261918u) {
        ctx->pc = 0x261918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261914u;
        // 0x261918: 0x8fa70034  lw          $a3, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26191Cu;
        goto label_26191c;
    }
    ctx->pc = 0x261914u;
    {
        const bool branch_taken_0x261914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261914u;
        // 0x261918: 0x8fa70034  lw          $a3, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261914) {
            ctx->pc = 0x261924u;
            goto label_261924;
        }
    }
    ctx->pc = 0x26191Cu;
label_26191c:
    // 0x26191c: 0x0  nop
    ctx->pc = 0x26191cu;
    // NOP
label_261920:
    // 0x261920: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x261920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_261924:
    // 0x261924: 0x86230020  lh          $v1, 0x20($s1)
    ctx->pc = 0x261924u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
label_261928:
    // 0x261928: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_26192c:
    if (ctx->pc == 0x26192Cu) {
        ctx->pc = 0x26192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261928u;
        // 0x26192c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261930u;
        goto label_261930;
    }
    ctx->pc = 0x261928u;
    {
        const bool branch_taken_0x261928 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x26192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261928u;
        // 0x26192c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261928) {
            ctx->pc = 0x261938u;
            goto label_261938;
        }
    }
    ctx->pc = 0x261930u;
label_261930:
    // 0x261930: 0x87a20030  lh          $v0, 0x30($sp)
    ctx->pc = 0x261930u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_261934:
    // 0x261934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_261938:
    // 0x261938: 0xe0f809  jalr        $a3
label_26193c:
    if (ctx->pc == 0x26193Cu) {
        ctx->pc = 0x26193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261938u;
        // 0x26193c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261940u;
        goto label_261940;
    }
    ctx->pc = 0x261938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x261940u);
        ctx->pc = 0x26193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261938u;
        // 0x26193c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261938u, 0x261940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261940u;
label_261940:
    // 0x261940: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x261940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261944:
    // 0x261944: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_261948:
    if (ctx->pc == 0x261948u) {
        ctx->pc = 0x261948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261944u;
        // 0x261948: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26194Cu;
        goto label_26194c;
    }
    ctx->pc = 0x261944u;
    {
        const bool branch_taken_0x261944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261944u;
        // 0x261948: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261944) {
            ctx->pc = 0x261990u;
            goto label_261990;
        }
    }
    ctx->pc = 0x26194Cu;
label_26194c:
    // 0x26194c: 0xc098b7e  jal         func_262DF8
label_261950:
    if (ctx->pc == 0x261950u) {
        ctx->pc = 0x261954u;
        goto label_261954;
    }
    ctx->pc = 0x26194Cu;
    SET_GPR_U32(ctx, 31, 0x261954u);
    ctx->pc = 0x262DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DF8u, 0x26194Cu, 0x261954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261954u;
label_261954:
    // 0x261954: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x261954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_261958:
    // 0x261958: 0xc098b7e  jal         func_262DF8
label_26195c:
    if (ctx->pc == 0x26195Cu) {
        ctx->pc = 0x26195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261958u;
        // 0x26195c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261960u;
        goto label_261960;
    }
    ctx->pc = 0x261958u;
    SET_GPR_U32(ctx, 31, 0x261960u);
    ctx->pc = 0x26195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261958u;
    // 0x26195c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DF8u, 0x261958u, 0x261960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261960u;
label_261960:
    // 0x261960: 0xc6400750  lwc1        $f0, 0x750($s2)
    ctx->pc = 0x261960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_261964:
    // 0x261964: 0xc6410758  lwc1        $f1, 0x758($s2)
    ctx->pc = 0x261964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_261968:
    // 0x261968: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x261968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_26196c:
    // 0x26196c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x26196cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_261970:
    // 0x261970: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x261970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_261974:
    // 0x261974: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x261974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_261978:
    // 0x261978: 0xc6600750  lwc1        $f0, 0x750($s3)
    ctx->pc = 0x261978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26197c:
    // 0x26197c: 0xc6610758  lwc1        $f1, 0x758($s3)
    ctx->pc = 0x26197cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_261980:
    // 0x261980: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x261980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_261984:
    // 0x261984: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x261984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_261988:
    // 0x261988: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x261988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_26198c:
    // 0x26198c: 0xe661001c  swc1        $f1, 0x1C($s3)
    ctx->pc = 0x26198cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
label_261990:
    // 0x261990: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x261990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_261994:
    // 0x261994: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x261994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_261998:
    // 0x261998: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x261998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26199c:
    // 0x26199c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x26199cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2619a0:
    // 0x2619a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2619a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2619a4:
    // 0x2619a4: 0x3e00008  jr          $ra
label_2619a8:
    if (ctx->pc == 0x2619A8u) {
        ctx->pc = 0x2619A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619A4u;
        // 0x2619a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2619ACu;
        goto label_2619ac;
    }
    ctx->pc = 0x2619A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2619A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619A4u;
        // 0x2619a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2619A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2619ACu;
label_2619ac:
    // 0x2619ac: 0x0  nop
    ctx->pc = 0x2619acu;
    // NOP
    ctx->pc = 0x2619b0u;
}
