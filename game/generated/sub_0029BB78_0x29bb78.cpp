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

// Function: sub_0029BB78
// Address: 0x29bb78 - 0x29bd28
void sub_0029BB78_0x29bb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BB78_0x29bb78");
#endif

    switch (ctx->pc) {
        case 0x29bbd4u: goto label_29bbd4;
        case 0x29bbe8u: goto label_29bbe8;
        case 0x29bbfcu: goto label_29bbfc;
        case 0x29bc10u: goto label_29bc10;
        case 0x29bc24u: goto label_29bc24;
        case 0x29bc38u: goto label_29bc38;
        case 0x29bc4cu: goto label_29bc4c;
        case 0x29bc60u: goto label_29bc60;
        case 0x29bc70u: goto label_29bc70;
        case 0x29bc80u: goto label_29bc80;
        case 0x29bcb8u: goto label_29bcb8;
        case 0x29bce4u: goto label_29bce4;
        default: break;
    }

    ctx->pc = 0x29bb78u;

    // 0x29bb78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29bb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29bb7c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29bb80: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29bb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29bb84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29bb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb88: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x29bb8c: 0x24a5c1e8  addiu       $a1, $a1, -0x3E18
    ctx->pc = 0x29bb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951400));
    // 0x29bb90: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29bb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x29bb94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29bb94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb98: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29bb9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29bb9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bba0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x29bba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x29bba4: 0x2415efff  addiu       $s5, $zero, -0x1001
    ctx->pc = 0x29bba4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29bba8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x29bba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x29bbac: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x29bbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x29bbb0: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x29bbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x29bbb4: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x29bbb4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x29bbb8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29bbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29bbbc: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x29bbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x29bbc0: 0x8e030158  lw          $v1, 0x158($s0)
    ctx->pc = 0x29bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x29bbc4: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x29bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x29bbc8: 0x24770050  addiu       $s7, $v1, 0x50
    ctx->pc = 0x29bbc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x29bbcc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BBCCu;
    SET_GPR_U32(ctx, 31, 0x29BBD4u);
    ctx->pc = 0x29BBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BBCCu;
    // 0x29bbd0: 0x24510050  addiu       $s1, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BBCCu, 0x29BBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BBD4u;
label_29bbd4:
    // 0x29bbd4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x29bbd8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29bbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29bbdc: 0x24a5c200  addiu       $a1, $a1, -0x3E00
    ctx->pc = 0x29bbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951424));
    // 0x29bbe0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BBE0u;
    SET_GPR_U32(ctx, 31, 0x29BBE8u);
    ctx->pc = 0x29BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BBE0u;
    // 0x29bbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BBE0u, 0x29BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BBE8u;
label_29bbe8:
    // 0x29bbe8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29bbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29bbec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x29bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x29bbf0: 0x24a5c218  addiu       $a1, $a1, -0x3DE8
    ctx->pc = 0x29bbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951448));
    // 0x29bbf4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BBF4u;
    SET_GPR_U32(ctx, 31, 0x29BBFCu);
    ctx->pc = 0x29BBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BBF4u;
    // 0x29bbf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BBF4u, 0x29BBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BBFCu;
label_29bbfc:
    // 0x29bbfc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29bbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29bc00: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x29bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x29bc04: 0x24a5c230  addiu       $a1, $a1, -0x3DD0
    ctx->pc = 0x29bc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951472));
    // 0x29bc08: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BC08u;
    SET_GPR_U32(ctx, 31, 0x29BC10u);
    ctx->pc = 0x29BC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC08u;
    // 0x29bc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BC08u, 0x29BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC10u;
label_29bc10:
    // 0x29bc10: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29bc14: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x29bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x29bc18: 0x24a5c248  addiu       $a1, $a1, -0x3DB8
    ctx->pc = 0x29bc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951496));
    // 0x29bc1c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BC1Cu;
    SET_GPR_U32(ctx, 31, 0x29BC24u);
    ctx->pc = 0x29BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC1Cu;
    // 0x29bc20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BC1Cu, 0x29BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC24u;
label_29bc24:
    // 0x29bc24: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29bc24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29bc28: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x29bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x29bc2c: 0x24a5c260  addiu       $a1, $a1, -0x3DA0
    ctx->pc = 0x29bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951520));
    // 0x29bc30: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BC30u;
    SET_GPR_U32(ctx, 31, 0x29BC38u);
    ctx->pc = 0x29BC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC30u;
    // 0x29bc34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BC30u, 0x29BC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC38u;
label_29bc38:
    // 0x29bc38: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29bc38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29bc3c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x29bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x29bc40: 0x24a5c278  addiu       $a1, $a1, -0x3D88
    ctx->pc = 0x29bc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951544));
    // 0x29bc44: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BC44u;
    SET_GPR_U32(ctx, 31, 0x29BC4Cu);
    ctx->pc = 0x29BC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC44u;
    // 0x29bc48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BC44u, 0x29BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC4Cu;
label_29bc4c:
    // 0x29bc4c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29bc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29bc50: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x29bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x29bc54: 0x24a5c290  addiu       $a1, $a1, -0x3D70
    ctx->pc = 0x29bc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951568));
    // 0x29bc58: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BC58u;
    SET_GPR_U32(ctx, 31, 0x29BC60u);
    ctx->pc = 0x29BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC58u;
    // 0x29bc5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BC58u, 0x29BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC60u;
label_29bc60:
    // 0x29bc60: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x29bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x29bc64: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x29bc64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x29bc68: 0x2476c660  addiu       $s6, $v1, -0x39A0
    ctx->pc = 0x29bc68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952544));
    // 0x29bc6c: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x29bc6cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_29bc70:
    // 0x29bc70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc74: 0x27c5c2a8  addiu       $a1, $fp, -0x3D58
    ctx->pc = 0x29bc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951592));
    // 0x29bc78: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29BC78u;
    SET_GPR_U32(ctx, 31, 0x29BC80u);
    ctx->pc = 0x29BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC78u;
    // 0x29bc7c: 0x2563021  addu        $a2, $s2, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29BC78u, 0x29BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC80u;
label_29bc80:
    // 0x29bc80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29bc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc84: 0x2662fffc  addiu       $v0, $s3, -0x4
    ctx->pc = 0x29bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x29bc88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29bc88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29bc8c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x29bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x29bc90: 0x2c420019  sltiu       $v0, $v0, 0x19
    ctx->pc = 0x29bc90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x29bc94: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x29bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x29bc98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29BC98u;
    {
        const bool branch_taken_0x29bc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC98u;
        // 0x29bc9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc98) {
            ctx->pc = 0x29BCB0u;
            goto label_29bcb0;
        }
    }
    ctx->pc = 0x29BCA0u;
    // 0x29bca0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29bca4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29BCA4u;
    {
        const bool branch_taken_0x29bca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BCA4u;
        // 0x29bca8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bca4) {
            ctx->pc = 0x29BCCCu;
            goto label_29bccc;
        }
    }
    ctx->pc = 0x29BCACu;
    // 0x29bcac: 0x0  nop
    ctx->pc = 0x29bcacu;
    // NOP
label_29bcb0:
    // 0x29bcb0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29BCB0u;
    SET_GPR_U32(ctx, 31, 0x29BCB8u);
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29BCB0u, 0x29BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BCB8u;
label_29bcb8:
    // 0x29bcb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29BCB8u;
    {
        const bool branch_taken_0x29bcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BCB8u;
        // 0x29bcbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bcb8) {
            ctx->pc = 0x29BCDCu;
            goto label_29bcdc;
        }
    }
    ctx->pc = 0x29BCC0u;
    // 0x29bcc0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29bcc4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29BCC4u;
    {
        const bool branch_taken_0x29bcc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bcc4) {
            ctx->pc = 0x29BCDCu;
            goto label_29bcdc;
        }
    }
    ctx->pc = 0x29BCCCu;
label_29bccc:
    // 0x29bccc: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29bcd0: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x29bcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x29bcd4: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29bcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29bcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29bcdc:
    // 0x29bcdc: 0xc0a5b8c  jal         func_296E30
    ctx->pc = 0x29BCDCu;
    SET_GPR_U32(ctx, 31, 0x29BCE4u);
    ctx->pc = 0x29BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BCDCu;
    // 0x29bce0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E30u, 0x29BCDCu, 0x29BCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BCE4u;
label_29bce4:
    // 0x29bce4: 0x2571821  addu        $v1, $s2, $s7
    ctx->pc = 0x29bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x29bce8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29bce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x29bcec: 0x2a620021  slti        $v0, $s3, 0x21
    ctx->pc = 0x29bcecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x29bcf0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x29BCF0u;
    {
        const bool branch_taken_0x29bcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BCF0u;
        // 0x29bcf4: 0x139080  sll         $s2, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bcf0) {
            ctx->pc = 0x29BC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29bc70;
        }
    }
    ctx->pc = 0x29BCF8u;
    // 0x29bcf8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29bcf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29bcfc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29bcfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29bd00: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29bd00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29bd04: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x29bd04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29bd08: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29bd08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29bd0c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x29bd0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29bd10: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x29bd10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29bd14: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x29bd14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29bd18: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x29bd18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29bd1c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x29bd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29bd20: 0x3e00008  jr          $ra
    ctx->pc = 0x29BD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD20u;
        // 0x29bd24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BD28u;
}
