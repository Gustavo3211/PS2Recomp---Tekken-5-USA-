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

// Function: sub_00215FB0
// Address: 0x215fb0 - 0x2160a8
void sub_00215FB0_0x215fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215FB0_0x215fb0");
#endif

    switch (ctx->pc) {
        case 0x215fc8u: goto label_215fc8;
        case 0x215fe4u: goto label_215fe4;
        case 0x216000u: goto label_216000;
        case 0x216018u: goto label_216018;
        case 0x216058u: goto label_216058;
        case 0x216070u: goto label_216070;
        case 0x216080u: goto label_216080;
        default: break;
    }

    ctx->pc = 0x215fb0u;

    // 0x215fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215fb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215fb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215fbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x215fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x215fc0: 0xc0a10c0  jal         func_284300
    ctx->pc = 0x215FC0u;
    SET_GPR_U32(ctx, 31, 0x215FC8u);
    ctx->pc = 0x215FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215FC0u;
    // 0x215fc4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284300u, 0x215FC0u, 0x215FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215FC8u;
label_215fc8:
    // 0x215fc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x215fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215fcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x215fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215fd0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x215fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x215fd4: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215FD4u;
    {
        const bool branch_taken_0x215fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215fd4) {
            ctx->pc = 0x215FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215FD4u;
            // 0x215fd8: 0x8f82c91c  lw          $v0, -0x36E4($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215FF0u;
            goto label_215ff0;
        }
    }
    ctx->pc = 0x215FDCu;
    // 0x215fdc: 0xc0c2340  jal         func_308D00
    ctx->pc = 0x215FDCu;
    SET_GPR_U32(ctx, 31, 0x215FE4u);
    ctx->pc = 0x308D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D00u, 0x215FDCu, 0x215FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215FE4u;
label_215fe4:
    // 0x215fe4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x215FE4u;
    {
        const bool branch_taken_0x215fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FE4u;
        // 0x215fe8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fe4) {
            ctx->pc = 0x216094u;
            goto label_216094;
        }
    }
    ctx->pc = 0x215FECu;
    // 0x215fec: 0x8f82c91c  lw          $v0, -0x36E4($gp)
    ctx->pc = 0x215fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953244)));
label_215ff0:
    // 0x215ff0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x215FF0u;
    {
        const bool branch_taken_0x215ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FF0u;
        // 0x215ff4: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ff0) {
            ctx->pc = 0x216030u;
            goto label_216030;
        }
    }
    ctx->pc = 0x215FF8u;
    // 0x215ff8: 0xc0a6100  jal         func_298400
    ctx->pc = 0x215FF8u;
    SET_GPR_U32(ctx, 31, 0x216000u);
    ctx->pc = 0x298400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298400u, 0x215FF8u, 0x216000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216000u;
label_216000:
    // 0x216000: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216000u;
    {
        const bool branch_taken_0x216000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216000) {
            ctx->pc = 0x216010u;
            goto label_216010;
        }
    }
    ctx->pc = 0x216008u;
    // 0x216008: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x216008u;
    {
        const bool branch_taken_0x216008 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x21600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216008u;
        // 0x21600c: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216008) {
            ctx->pc = 0x216030u;
            goto label_216030;
        }
    }
    ctx->pc = 0x216010u;
label_216010:
    // 0x216010: 0xc0a4c64  jal         func_293190
    ctx->pc = 0x216010u;
    SET_GPR_U32(ctx, 31, 0x216018u);
    ctx->pc = 0x293190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293190u, 0x216010u, 0x216018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216018u;
label_216018:
    // 0x216018: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x216018u;
    {
        const bool branch_taken_0x216018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216018u;
        // 0x21601c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216018) {
            ctx->pc = 0x216090u;
            goto label_216090;
        }
    }
    ctx->pc = 0x216020u;
    // 0x216020: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x216020u;
    {
        const bool branch_taken_0x216020 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x216024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216020u;
        // 0x216024: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216020) {
            ctx->pc = 0x21605Cu;
            goto label_21605c;
        }
    }
    ctx->pc = 0x216028u;
    // 0x216028: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x216028u;
    {
        const bool branch_taken_0x216028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216028u;
        // 0x21602c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216028) {
            ctx->pc = 0x216094u;
            goto label_216094;
        }
    }
    ctx->pc = 0x216030u;
label_216030:
    // 0x216030: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x216030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x216034: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x216034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x216038: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x216038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x21603c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x21603cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x216040: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x216040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x216044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x216044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x216048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21604c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21604cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216050: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x216050u;
    SET_GPR_U32(ctx, 31, 0x216058u);
    ctx->pc = 0x216054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216050u;
    // 0x216054: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x216050u, 0x216058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216058u;
label_216058:
    // 0x216058: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x216058u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
label_21605c:
    // 0x21605c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21605cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216060: 0x261088d0  addiu       $s0, $s0, -0x7730
    ctx->pc = 0x216060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    // 0x216064: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x216064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216068: 0xc089c82  jal         func_227208
    ctx->pc = 0x216068u;
    SET_GPR_U32(ctx, 31, 0x216070u);
    ctx->pc = 0x21606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216068u;
    // 0x21606c: 0x84450042  lh          $a1, 0x42($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227208u, 0x216068u, 0x216070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216070u;
label_216070:
    // 0x216070: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x216070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216074: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x216074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216078: 0xc089c82  jal         func_227208
    ctx->pc = 0x216078u;
    SET_GPR_U32(ctx, 31, 0x216080u);
    ctx->pc = 0x21607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216078u;
    // 0x21607c: 0x84450042  lh          $a1, 0x42($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227208u, 0x216078u, 0x216080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216080u;
label_216080:
    // 0x216080: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x216080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x216084: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x216084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x216088: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x216088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21608c: 0xac83886c  sw          $v1, -0x7794($a0)
    ctx->pc = 0x21608cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
label_216090:
    // 0x216090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_216094:
    // 0x216094: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x216098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21609c: 0x3e00008  jr          $ra
    ctx->pc = 0x21609Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2160A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21609Cu;
        // 0x2160a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21609Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2160A4u;
    // 0x2160a4: 0x0  nop
    ctx->pc = 0x2160a4u;
    // NOP
    ctx->pc = 0x2160a8u;
}
