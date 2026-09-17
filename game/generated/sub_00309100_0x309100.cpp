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

// Function: sub_00309100
// Address: 0x309100 - 0x309320
void sub_00309100_0x309100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309100_0x309100");
#endif

    switch (ctx->pc) {
        case 0x30911cu: goto label_30911c;
        case 0x309128u: goto label_309128;
        case 0x309170u: goto label_309170;
        case 0x30917cu: goto label_30917c;
        case 0x309184u: goto label_309184;
        case 0x309190u: goto label_309190;
        case 0x3091a0u: goto label_3091a0;
        case 0x3091b0u: goto label_3091b0;
        case 0x3091b8u: goto label_3091b8;
        case 0x3091c0u: goto label_3091c0;
        case 0x3091e8u: goto label_3091e8;
        case 0x309250u: goto label_309250;
        case 0x30929cu: goto label_30929c;
        default: break;
    }

    ctx->pc = 0x309100u;

    // 0x309100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x309100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x309104: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x309104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x309108: 0x3c10001b  lui         $s0, 0x1B
    ctx->pc = 0x309108u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)27 << 16));
    // 0x30910c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x30910cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x309110: 0x2610ed40  addiu       $s0, $s0, -0x12C0
    ctx->pc = 0x309110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962496));
    // 0x309114: 0xc0cb314  jal         func_32CC50
    ctx->pc = 0x309114u;
    SET_GPR_U32(ctx, 31, 0x30911Cu);
    ctx->pc = 0x309118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309114u;
    // 0x309118: 0x8e040374  lw          $a0, 0x374($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC50u, 0x309114u, 0x30911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30911Cu;
label_30911c:
    // 0x30911c: 0x8e040374  lw          $a0, 0x374($s0)
    ctx->pc = 0x30911cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x309120: 0xc0cc106  jal         func_330418
    ctx->pc = 0x309120u;
    SET_GPR_U32(ctx, 31, 0x309128u);
    ctx->pc = 0x309124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309120u;
    // 0x309124: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330418u, 0x309120u, 0x309128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309128u;
label_309128:
    // 0x309128: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x309128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x30912c: 0x8e08005c  lw          $t0, 0x5C($s0)
    ctx->pc = 0x30912cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x309130: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x309130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309134: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x309134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x309138: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x309138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x30913c: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x30913cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x309140: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x309140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309144: 0x23940  sll         $a3, $v0, 5
    ctx->pc = 0x309144u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x309148: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x309148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x30914c: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x30914cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x309150: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x309150u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x309154: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x309154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x309158: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x309158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x30915c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x30915cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x309160: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x309160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x309164: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x309164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x309168: 0xc043d88  jal         func_10F620
    ctx->pc = 0x309168u;
    SET_GPR_U32(ctx, 31, 0x309170u);
    ctx->pc = 0x30916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309168u;
    // 0x30916c: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x309168u, 0x309170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309170u;
label_309170:
    // 0x309170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309174: 0xc0c2668  jal         func_3099A0
    ctx->pc = 0x309174u;
    SET_GPR_U32(ctx, 31, 0x30917Cu);
    ctx->pc = 0x309178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309174u;
    // 0x309178: 0x8f85c52c  lw          $a1, -0x3AD4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3099A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3099A0u, 0x309174u, 0x30917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30917Cu;
label_30917c:
    // 0x30917c: 0xc043d88  jal         func_10F620
    ctx->pc = 0x30917Cu;
    SET_GPR_U32(ctx, 31, 0x309184u);
    ctx->pc = 0x309180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30917Cu;
    // 0x309180: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x30917Cu, 0x309184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309184u;
label_309184:
    // 0x309184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309188: 0xc0c26a2  jal         func_309A88
    ctx->pc = 0x309188u;
    SET_GPR_U32(ctx, 31, 0x309190u);
    ctx->pc = 0x30918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309188u;
    // 0x30918c: 0x8f85c52c  lw          $a1, -0x3AD4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309A88u, 0x309188u, 0x309190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309190u;
label_309190:
    // 0x309190: 0x2785cb80  addiu       $a1, $gp, -0x3480
    ctx->pc = 0x309190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953856));
    // 0x309194: 0x8f86cb7c  lw          $a2, -0x3484($gp)
    ctx->pc = 0x309194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953852)));
    // 0x309198: 0xc0cc0c2  jal         func_330308
    ctx->pc = 0x309198u;
    SET_GPR_U32(ctx, 31, 0x3091A0u);
    ctx->pc = 0x30919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309198u;
    // 0x30919c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330308u, 0x309198u, 0x3091A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3091A0u;
label_3091a0:
    // 0x3091a0: 0x8f82c52c  lw          $v0, -0x3AD4($gp)
    ctx->pc = 0x3091a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952236)));
    // 0x3091a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3091a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3091a8: 0xc0cb31c  jal         func_32CC70
    ctx->pc = 0x3091A8u;
    SET_GPR_U32(ctx, 31, 0x3091B0u);
    ctx->pc = 0x3091ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3091A8u;
    // 0x3091ac: 0xaf82c52c  sw          $v0, -0x3AD4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC70u, 0x3091A8u, 0x3091B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3091B0u;
label_3091b0:
    // 0x3091b0: 0xc0c6870  jal         func_31A1C0
    ctx->pc = 0x3091B0u;
    SET_GPR_U32(ctx, 31, 0x3091B8u);
    ctx->pc = 0x31A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1C0u, 0x3091B0u, 0x3091B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3091B8u;
label_3091b8:
    // 0x3091b8: 0xc0c6878  jal         func_31A1E0
    ctx->pc = 0x3091B8u;
    SET_GPR_U32(ctx, 31, 0x3091C0u);
    ctx->pc = 0x31A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1E0u, 0x3091B8u, 0x3091C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3091C0u;
label_3091c0:
    // 0x3091c0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3091c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3091c4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3091c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3091c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3091C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3091CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091C8u;
        // 0x3091cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3091C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3091D0u;
    // 0x3091d0: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x3091d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x3091d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3091d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3091d8: 0x8c44f0b4  lw          $a0, -0xF4C($v0)
    ctx->pc = 0x3091d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1AF0B4u));
    // 0x3091dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3091dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3091e0: 0xc0cb30a  jal         func_32CC28
    ctx->pc = 0x3091E0u;
    SET_GPR_U32(ctx, 31, 0x3091E8u);
    ctx->pc = 0x32CC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC28u, 0x3091E0u, 0x3091E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3091E8u;
label_3091e8:
    // 0x3091e8: 0xaf80c524  sw          $zero, -0x3ADC($gp)
    ctx->pc = 0x3091e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952228), GPR_U32(ctx, 0));
    // 0x3091ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3091ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3091f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3091F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3091F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091F0u;
        // 0x3091f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3091F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3091F8u;
    // 0x3091f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3091f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3091fc: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x3091fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x309200: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x309200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x309204: 0x2451eda8  addiu       $s1, $v0, -0x1258
    ctx->pc = 0x309204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962600));
    // 0x309208: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x309208u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30920c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x30920cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x309210: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x309210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x309214: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x309214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x309218: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x309218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30921c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30921cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x309220: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x309220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x309224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309228: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x309228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30922c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x309230: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x309230u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x309234: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x309234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x309238: 0x26330200  addiu       $s3, $s1, 0x200
    ctx->pc = 0x309238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x30923c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30923cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x309240: 0x26340100  addiu       $s4, $s1, 0x100
    ctx->pc = 0x309240u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x309244: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x309244u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x309248: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x309248u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x30924c: 0x0  nop
    ctx->pc = 0x30924cu;
    // NOP
label_309250:
    // 0x309250: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309250u;
    {
        const bool branch_taken_0x309250 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x309254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309250u;
        // 0x309254: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309250) {
            ctx->pc = 0x309268u;
            goto label_309268;
        }
    }
    ctx->pc = 0x309258u;
    // 0x309258: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x309258u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30925c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x30925cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x309260: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x309260u;
    {
        const bool branch_taken_0x309260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309260) {
            ctx->pc = 0x30927Cu;
            goto label_30927c;
        }
    }
    ctx->pc = 0x309268u;
label_309268:
    // 0x309268: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x309268u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x30926c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30926cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309270: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x309270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x309274: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x309274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x309278: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x309278u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_30927c:
    // 0x30927c: 0x0  nop
    ctx->pc = 0x30927cu;
    // NOP
    // 0x309280: 0x0  nop
    ctx->pc = 0x309280u;
    // NOP
    // 0x309284: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x309284u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x309288: 0x0  nop
    ctx->pc = 0x309288u;
    // NOP
    // 0x30928c: 0x0  nop
    ctx->pc = 0x30928cu;
    // NOP
    // 0x309290: 0x4615b343  div.s       $f13, $f22, $f21
    ctx->pc = 0x309290u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[13] = ctx->f[22] / ctx->f[21];
    // 0x309294: 0xc047546  jal         func_11D518
    ctx->pc = 0x309294u;
    SET_GPR_U32(ctx, 31, 0x30929Cu);
    ctx->pc = 0x11D518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D518u, 0x309294u, 0x30929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30929Cu;
label_30929c:
    // 0x30929c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x30929cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3092a0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x3092a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x3092a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3092a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3092a8: 0x2303021  addu        $a2, $s1, $s0
    ctx->pc = 0x3092a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3092ac: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x3092acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x3092b0: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x3092b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x3092b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3092b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3092b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3092b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3092bc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3092bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3092c0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3092c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3092c4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3092C4u;
    {
        const bool branch_taken_0x3092c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3092C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092C4u;
        // 0x3092c8: 0x2e040100  sltiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3092c4) {
            ctx->pc = 0x3092DCu;
            goto label_3092dc;
        }
    }
    ctx->pc = 0x3092CCu;
    // 0x3092cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3092ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3092d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3092d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3092d4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3092d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3092d8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x3092d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_3092dc:
    // 0x3092dc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3092dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3092e0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3092e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3092e4: 0x1480ffda  bnez        $a0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x3092E4u;
    {
        const bool branch_taken_0x3092e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3092E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092E4u;
        // 0x3092e8: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3092e4) {
            ctx->pc = 0x309250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309250;
        }
    }
    ctx->pc = 0x3092ECu;
    // 0x3092ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3092ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3092f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3092f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3092f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3092f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3092f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3092f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3092fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3092fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309300: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x309300u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309304: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x309304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309308: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x309308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x30930c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x30930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x309310: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x309310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x309314: 0x80c26aa  j           func_309AA8
    ctx->pc = 0x309314u;
    ctx->pc = 0x309318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309314u;
    // 0x309318: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309AA8u;
    sub_00309AA8_0x309aa8(rdram, ctx, runtime); return;
    ctx->pc = 0x30931Cu;
    // 0x30931c: 0x0  nop
    ctx->pc = 0x30931cu;
    // NOP
    ctx->pc = 0x309320u;
}
