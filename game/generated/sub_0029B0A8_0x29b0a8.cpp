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

// Function: sub_0029B0A8
// Address: 0x29b0a8 - 0x29b1a0
void sub_0029B0A8_0x29b0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B0A8_0x29b0a8");
#endif

    switch (ctx->pc) {
        case 0x29b0f4u: goto label_29b0f4;
        case 0x29b104u: goto label_29b104;
        case 0x29b110u: goto label_29b110;
        case 0x29b130u: goto label_29b130;
        case 0x29b140u: goto label_29b140;
        case 0x29b160u: goto label_29b160;
        case 0x29b178u: goto label_29b178;
        case 0x29b180u: goto label_29b180;
        default: break;
    }

    ctx->pc = 0x29b0a8u;

    // 0x29b0a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b0ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29b0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29b0b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29b0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b0b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b0b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29b0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29b0bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29b0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29b0c0: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x29b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x29b0c4: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x29B0C4u;
    {
        const bool branch_taken_0x29b0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B0C4u;
        // 0x29b0c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b0c4) {
            ctx->pc = 0x29B184u;
            goto label_29b184;
        }
    }
    ctx->pc = 0x29B0CCu;
    // 0x29b0cc: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x29b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x29b0d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29b0d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b0d4: 0x10720018  beq         $v1, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x29B0D4u;
    {
        const bool branch_taken_0x29b0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x29B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B0D4u;
        // 0x29b0d8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b0d4) {
            ctx->pc = 0x29B138u;
            goto label_29b138;
        }
    }
    ctx->pc = 0x29B0DCu;
    // 0x29b0dc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x29B0DCu;
    {
        const bool branch_taken_0x29b0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b0dc) {
            ctx->pc = 0x29B170u;
            goto label_29b170;
        }
    }
    ctx->pc = 0x29B0E4u;
    // 0x29b0e4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x29B0E4u;
    {
        const bool branch_taken_0x29b0e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b0e4) {
            ctx->pc = 0x29B170u;
            goto label_29b170;
        }
    }
    ctx->pc = 0x29B0ECu;
    // 0x29b0ec: 0xc089622  jal         func_225888
    ctx->pc = 0x29B0ECu;
    SET_GPR_U32(ctx, 31, 0x29B0F4u);
    ctx->pc = 0x29B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B0ECu;
    // 0x29b0f0: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x29B0ECu, 0x29B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0F4u;
label_29b0f4:
    // 0x29b0f4: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x29B0F4u;
    {
        const bool branch_taken_0x29b0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b0f4) {
            ctx->pc = 0x29B0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B0F4u;
            // 0x29b0f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B184u;
            goto label_29b184;
        }
    }
    ctx->pc = 0x29B0FCu;
    // 0x29b0fc: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x29B0FCu;
    SET_GPR_U32(ctx, 31, 0x29B104u);
    ctx->pc = 0x29B100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B0FCu;
    // 0x29b100: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x29B0FCu, 0x29B104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B104u;
label_29b104:
    // 0x29b104: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x29b104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x29b108: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x29B108u;
    SET_GPR_U32(ctx, 31, 0x29B110u);
    ctx->pc = 0x29B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B108u;
    // 0x29b10c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x29B108u, 0x29B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B110u;
label_29b110:
    // 0x29b110: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x29b110u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x29b114: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29b114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29b118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b11c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29b11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b120: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x29b120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x29b124: 0x240800f1  addiu       $t0, $zero, 0xF1
    ctx->pc = 0x29b124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x29b128: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x29B128u;
    SET_GPR_U32(ctx, 31, 0x29B130u);
    ctx->pc = 0x29B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B128u;
    // 0x29b12c: 0x35290400  ori         $t1, $t1, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x29B128u, 0x29B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B130u;
label_29b130:
    // 0x29b130: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x29B130u;
    {
        const bool branch_taken_0x29b130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B130u;
        // 0x29b134: 0xae320048  sw          $s2, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b130) {
            ctx->pc = 0x29B180u;
            goto label_29b180;
        }
    }
    ctx->pc = 0x29B138u;
label_29b138:
    // 0x29b138: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x29B138u;
    SET_GPR_U32(ctx, 31, 0x29B140u);
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x29B138u, 0x29B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B140u;
label_29b140:
    // 0x29b140: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x29b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x29b144: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29B144u;
    {
        const bool branch_taken_0x29b144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B144u;
        // 0x29b148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b144) {
            ctx->pc = 0x29B184u;
            goto label_29b184;
        }
    }
    ctx->pc = 0x29B14Cu;
    // 0x29b14c: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x29b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x29b150: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x29B150u;
    {
        const bool branch_taken_0x29b150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b150) {
            ctx->pc = 0x29B154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B150u;
            // 0x29b154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B184u;
            goto label_29b184;
        }
    }
    ctx->pc = 0x29B158u;
    // 0x29b158: 0xc0a6df8  jal         func_29B7E0
    ctx->pc = 0x29B158u;
    SET_GPR_U32(ctx, 31, 0x29B160u);
    ctx->pc = 0x29B15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B158u;
    // 0x29b15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B7E0u, 0x29B158u, 0x29B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B160u;
label_29b160:
    // 0x29b160: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29b160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b164: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29B164u;
    {
        const bool branch_taken_0x29b164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B164u;
        // 0x29b168: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b164) {
            ctx->pc = 0x29B180u;
            goto label_29b180;
        }
    }
    ctx->pc = 0x29B16Cu;
    // 0x29b16c: 0x0  nop
    ctx->pc = 0x29b16cu;
    // NOP
label_29b170:
    // 0x29b170: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x29B170u;
    SET_GPR_U32(ctx, 31, 0x29B178u);
    ctx->pc = 0x29B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B170u;
    // 0x29b174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x29B170u, 0x29B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B178u;
label_29b178:
    // 0x29b178: 0xc0a7060  jal         func_29C180
    ctx->pc = 0x29B178u;
    SET_GPR_U32(ctx, 31, 0x29B180u);
    ctx->pc = 0x29B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B178u;
    // 0x29b17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C180u, 0x29B178u, 0x29B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B180u;
label_29b180:
    // 0x29b180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b184:
    // 0x29b184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b188: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29b188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29b18c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29b18cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b190: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29b190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29b194: 0x3e00008  jr          $ra
    ctx->pc = 0x29B194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B194u;
        // 0x29b198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B19Cu;
    // 0x29b19c: 0x0  nop
    ctx->pc = 0x29b19cu;
    // NOP
    ctx->pc = 0x29b1a0u;
}
