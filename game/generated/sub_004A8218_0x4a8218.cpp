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

// Function: sub_004A8218
// Address: 0x4a8218 - 0x4a8318
void sub_004A8218_0x4a8218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8218_0x4a8218");
#endif

    switch (ctx->pc) {
        case 0x4a82a0u: goto label_4a82a0;
        case 0x4a82b0u: goto label_4a82b0;
        case 0x4a82c0u: goto label_4a82c0;
        case 0x4a82d0u: goto label_4a82d0;
        case 0x4a82e0u: goto label_4a82e0;
        default: break;
    }

    ctx->pc = 0x4a8218u;

    // 0x4a8218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a8218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a821c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a821cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a8220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a8220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a8224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a8224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8228: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a8228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a822c: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4a822cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4a8230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a8230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a8234: 0x26260c50  addiu       $a2, $s1, 0xC50
    ctx->pc = 0x4a8234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3152));
    // 0x4a8238: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a8238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a823c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a823cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C50u));
    // 0x4a8240: 0x24a50c44  addiu       $a1, $a1, 0xC44
    ctx->pc = 0x4a8240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3140));
    // 0x4a8244: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a8244u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C44u));
    // 0x4a8248: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4a8248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4a824c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4a824cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4a8250: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a8250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a8254: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x4a8254u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x4a8258: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a8258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a825c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a825cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a8260: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a8260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a8264: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a8264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a8268: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a8268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a826c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4a826cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4a8270: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x4a8270u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4a8274: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x4A8274u;
    {
        const bool branch_taken_0x4a8274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8274u;
        // 0x4a8278: 0x86230c50  lh          $v1, 0xC50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 3152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8274) {
            ctx->pc = 0x4A82E4u;
            goto label_4a82e4;
        }
    }
    ctx->pc = 0x4A827Cu;
    // 0x4a827c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a827cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a8280: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4a8280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4a8284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a8284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a8288: 0x8c63b210  lw          $v1, -0x4DF0($v1)
    ctx->pc = 0x4a8288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947344)));
    // 0x4a828c: 0x600008  jr          $v1
    ctx->pc = 0x4A828Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A8298u: goto label_4a8298;
            case 0x4A82A8u: goto label_4a82a8;
            case 0x4A82B8u: goto label_4a82b8;
            case 0x4A82C8u: goto label_4a82c8;
            case 0x4A82D8u: goto label_4a82d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A828Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4A8294u;
    // 0x4a8294: 0x0  nop
    ctx->pc = 0x4a8294u;
    // NOP
label_4a8298:
    // 0x4a8298: 0xc129c6a  jal         func_4A71A8
    ctx->pc = 0x4A8298u;
    SET_GPR_U32(ctx, 31, 0x4A82A0u);
    ctx->pc = 0x4A829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8298u;
    // 0x4a829c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A71A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A71A8u, 0x4A8298u, 0x4A82A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A82A0u;
label_4a82a0:
    // 0x4a82a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4A82A0u;
    {
        const bool branch_taken_0x4a82a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A82A0u;
        // 0x4a82a4: 0x86230c50  lh          $v1, 0xC50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 3152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a82a0) {
            ctx->pc = 0x4A82E4u;
            goto label_4a82e4;
        }
    }
    ctx->pc = 0x4A82A8u;
label_4a82a8:
    // 0x4a82a8: 0xc129d42  jal         func_4A7508
    ctx->pc = 0x4A82A8u;
    SET_GPR_U32(ctx, 31, 0x4A82B0u);
    ctx->pc = 0x4A82ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A82A8u;
    // 0x4a82ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7508u, 0x4A82A8u, 0x4A82B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A82B0u;
label_4a82b0:
    // 0x4a82b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4A82B0u;
    {
        const bool branch_taken_0x4a82b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A82B0u;
        // 0x4a82b4: 0x86230c50  lh          $v1, 0xC50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 3152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a82b0) {
            ctx->pc = 0x4A82E4u;
            goto label_4a82e4;
        }
    }
    ctx->pc = 0x4A82B8u;
label_4a82b8:
    // 0x4a82b8: 0xc129e50  jal         func_4A7940
    ctx->pc = 0x4A82B8u;
    SET_GPR_U32(ctx, 31, 0x4A82C0u);
    ctx->pc = 0x4A82BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A82B8u;
    // 0x4a82bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7940u, 0x4A82B8u, 0x4A82C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A82C0u;
label_4a82c0:
    // 0x4a82c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A82C0u;
    {
        const bool branch_taken_0x4a82c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A82C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A82C0u;
        // 0x4a82c4: 0x86230c50  lh          $v1, 0xC50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 3152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a82c0) {
            ctx->pc = 0x4A82E4u;
            goto label_4a82e4;
        }
    }
    ctx->pc = 0x4A82C8u;
label_4a82c8:
    // 0x4a82c8: 0xc129f76  jal         func_4A7DD8
    ctx->pc = 0x4A82C8u;
    SET_GPR_U32(ctx, 31, 0x4A82D0u);
    ctx->pc = 0x4A82CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A82C8u;
    // 0x4a82cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7DD8u, 0x4A82C8u, 0x4A82D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A82D0u;
label_4a82d0:
    // 0x4a82d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A82D0u;
    {
        const bool branch_taken_0x4a82d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A82D0u;
        // 0x4a82d4: 0x86230c50  lh          $v1, 0xC50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 3152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a82d0) {
            ctx->pc = 0x4A82E4u;
            goto label_4a82e4;
        }
    }
    ctx->pc = 0x4A82D8u;
label_4a82d8:
    // 0x4a82d8: 0xc12a02c  jal         func_4A80B0
    ctx->pc = 0x4A82D8u;
    SET_GPR_U32(ctx, 31, 0x4A82E0u);
    ctx->pc = 0x4A82DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A82D8u;
    // 0x4a82dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A80B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A80B0u, 0x4A82D8u, 0x4A82E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A82E0u;
label_4a82e0:
    // 0x4a82e0: 0x86230c50  lh          $v1, 0xC50($s1)
    ctx->pc = 0x4a82e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 3152)));
label_4a82e4:
    // 0x4a82e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4a82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a82e8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A82E8u;
    {
        const bool branch_taken_0x4a82e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a82e8) {
            ctx->pc = 0x4A82ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A82E8u;
            // 0x4a82ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8308u;
            goto label_4a8308;
        }
    }
    ctx->pc = 0x4A82F0u;
    // 0x4a82f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a82f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a82f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a82f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a82f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a82f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a82fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a82fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a8300: 0x8123392  j           func_48CE48
    ctx->pc = 0x4A8300u;
    ctx->pc = 0x4A8304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8300u;
    // 0x4a8304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    sub_0048CE48_0x48ce48(rdram, ctx, runtime); return;
    ctx->pc = 0x4A8308u;
label_4a8308:
    // 0x4a8308: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a8308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a830c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a830cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a8310: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8310u;
        // 0x4a8314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8318u;
}
