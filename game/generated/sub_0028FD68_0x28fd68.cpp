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

// Function: sub_0028FD68
// Address: 0x28fd68 - 0x290078
void sub_0028FD68_0x28fd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FD68_0x28fd68");
#endif

    switch (ctx->pc) {
        case 0x28fdd4u: goto label_28fdd4;
        case 0x28fe00u: goto label_28fe00;
        case 0x28fe2cu: goto label_28fe2c;
        case 0x28fe58u: goto label_28fe58;
        case 0x28fe88u: goto label_28fe88;
        case 0x28fe9cu: goto label_28fe9c;
        case 0x28feb0u: goto label_28feb0;
        case 0x28fec4u: goto label_28fec4;
        case 0x28fed4u: goto label_28fed4;
        case 0x28ff00u: goto label_28ff00;
        case 0x28ff08u: goto label_28ff08;
        case 0x28ff3cu: goto label_28ff3c;
        case 0x28ff50u: goto label_28ff50;
        case 0x28ff58u: goto label_28ff58;
        case 0x28ff6cu: goto label_28ff6c;
        case 0x28ff78u: goto label_28ff78;
        case 0x28ff8cu: goto label_28ff8c;
        case 0x28ffa8u: goto label_28ffa8;
        default: break;
    }

    ctx->pc = 0x28fd68u;

    // 0x28fd68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28fd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28fd6c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x28fd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x28fd70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28fd70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd74: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x28fd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x28fd78: 0x2664015c  addiu       $a0, $s3, 0x15C
    ctx->pc = 0x28fd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 348));
    // 0x28fd7c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x28fd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x28fd80: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x28fd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x28fd84: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x28fd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x28fd88: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x28fd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x28fd8c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x28fd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x28fd90: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x28fd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x28fd94: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x28fd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x28fd98: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x28fd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x28fd9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28fda0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FDA0u;
    {
        const bool branch_taken_0x28fda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDA0u;
        // 0x28fda4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fda0) {
            ctx->pc = 0x28FDB8u;
            goto label_28fdb8;
        }
    }
    ctx->pc = 0x28FDA8u;
    // 0x28fda8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28fdac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28fdb0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FDB0u;
    {
        const bool branch_taken_0x28fdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28fdb0) {
            ctx->pc = 0x28FDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FDB0u;
            // 0x28fdb4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FDC8u;
            goto label_28fdc8;
        }
    }
    ctx->pc = 0x28FDB8u;
label_28fdb8:
    // 0x28fdb8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x28fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x28fdbc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28fdbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdc0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x28fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x28fdc4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28fdc8:
    // 0x28fdc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28fdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdcc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FDCCu;
    SET_GPR_U32(ctx, 31, 0x28FDD4u);
    ctx->pc = 0x28FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FDCCu;
    // 0x28fdd0: 0x24a5aaf0  addiu       $a1, $a1, -0x5510 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FDCCu, 0x28FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDD4u;
label_28fdd4:
    // 0x28fdd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28fdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdd8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FDD8u;
    {
        const bool branch_taken_0x28fdd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDD8u;
        // 0x28fddc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fdd8) {
            ctx->pc = 0x28FDECu;
            goto label_28fdec;
        }
    }
    ctx->pc = 0x28FDE0u;
    // 0x28fde0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28fde4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28fde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28fde8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28fdec:
    // 0x28fdec: 0xae8400dc  sw          $a0, 0xDC($s4)
    ctx->pc = 0x28fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 220), GPR_U32(ctx, 4));
    // 0x28fdf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28fdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdf4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28fdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28fdf8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FDF8u;
    SET_GPR_U32(ctx, 31, 0x28FE00u);
    ctx->pc = 0x28FDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FDF8u;
    // 0x28fdfc: 0x24a5ab00  addiu       $a1, $a1, -0x5500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FDF8u, 0x28FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE00u;
label_28fe00:
    // 0x28fe00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28fe00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe04: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FE04u;
    {
        const bool branch_taken_0x28fe04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE04u;
        // 0x28fe08: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe04) {
            ctx->pc = 0x28FE18u;
            goto label_28fe18;
        }
    }
    ctx->pc = 0x28FE0Cu;
    // 0x28fe0c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28fe10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28fe10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28fe14: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28fe18:
    // 0x28fe18: 0xae8400e0  sw          $a0, 0xE0($s4)
    ctx->pc = 0x28fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 4));
    // 0x28fe1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28fe1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe20: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28fe24: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FE24u;
    SET_GPR_U32(ctx, 31, 0x28FE2Cu);
    ctx->pc = 0x28FE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE24u;
    // 0x28fe28: 0x24a5ab10  addiu       $a1, $a1, -0x54F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FE24u, 0x28FE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE2Cu;
label_28fe2c:
    // 0x28fe2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28fe2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe30: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FE30u;
    {
        const bool branch_taken_0x28fe30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE30u;
        // 0x28fe34: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe30) {
            ctx->pc = 0x28FE44u;
            goto label_28fe44;
        }
    }
    ctx->pc = 0x28FE38u;
    // 0x28fe38: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28fe3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28fe3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28fe40: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28fe40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28fe44:
    // 0x28fe44: 0xae8400e4  sw          $a0, 0xE4($s4)
    ctx->pc = 0x28fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 228), GPR_U32(ctx, 4));
    // 0x28fe48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28fe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe4c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28fe50: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FE50u;
    SET_GPR_U32(ctx, 31, 0x28FE58u);
    ctx->pc = 0x28FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE50u;
    // 0x28fe54: 0x24a5ab28  addiu       $a1, $a1, -0x54D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FE50u, 0x28FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE58u;
label_28fe58:
    // 0x28fe58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28fe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe5c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FE5Cu;
    {
        const bool branch_taken_0x28fe5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE5Cu;
        // 0x28fe60: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe5c) {
            ctx->pc = 0x28FE70u;
            goto label_28fe70;
        }
    }
    ctx->pc = 0x28FE64u;
    // 0x28fe64: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28fe68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28fe68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28fe6c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28fe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28fe70:
    // 0x28fe70: 0xae8400e8  sw          $a0, 0xE8($s4)
    ctx->pc = 0x28fe70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 232), GPR_U32(ctx, 4));
    // 0x28fe74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28fe74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe78: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28fe78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28fe7c: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x28fe7cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x28fe80: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28FE80u;
    SET_GPR_U32(ctx, 31, 0x28FE88u);
    ctx->pc = 0x28FE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE80u;
    // 0x28fe84: 0x24a5ab40  addiu       $a1, $a1, -0x54C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28FE80u, 0x28FE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE88u;
label_28fe88:
    // 0x28fe88: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28fe88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28fe8c: 0xae8200ec  sw          $v0, 0xEC($s4)
    ctx->pc = 0x28fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 2));
    // 0x28fe90: 0x24a5ab58  addiu       $a1, $a1, -0x54A8
    ctx->pc = 0x28fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945624));
    // 0x28fe94: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28FE94u;
    SET_GPR_U32(ctx, 31, 0x28FE9Cu);
    ctx->pc = 0x28FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE94u;
    // 0x28fe98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28FE94u, 0x28FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE9Cu;
label_28fe9c:
    // 0x28fe9c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28fe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28fea0: 0xae8200f0  sw          $v0, 0xF0($s4)
    ctx->pc = 0x28fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 240), GPR_U32(ctx, 2));
    // 0x28fea4: 0x24a5ab70  addiu       $a1, $a1, -0x5490
    ctx->pc = 0x28fea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945648));
    // 0x28fea8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28FEA8u;
    SET_GPR_U32(ctx, 31, 0x28FEB0u);
    ctx->pc = 0x28FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FEA8u;
    // 0x28feac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28FEA8u, 0x28FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEB0u;
label_28feb0:
    // 0x28feb0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28feb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28feb4: 0xae8200f4  sw          $v0, 0xF4($s4)
    ctx->pc = 0x28feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 244), GPR_U32(ctx, 2));
    // 0x28feb8: 0x24a5ab90  addiu       $a1, $a1, -0x5470
    ctx->pc = 0x28feb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945680));
    // 0x28febc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28FEBCu;
    SET_GPR_U32(ctx, 31, 0x28FEC4u);
    ctx->pc = 0x28FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FEBCu;
    // 0x28fec0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28FEBCu, 0x28FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEC4u;
label_28fec4:
    // 0x28fec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28fec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fec8: 0xae8200f8  sw          $v0, 0xF8($s4)
    ctx->pc = 0x28fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 248), GPR_U32(ctx, 2));
    // 0x28fecc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FECCu;
    SET_GPR_U32(ctx, 31, 0x28FED4u);
    ctx->pc = 0x28FED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FECCu;
    // 0x28fed0: 0x27c5abb0  addiu       $a1, $fp, -0x5450 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FECCu, 0x28FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FED4u;
label_28fed4:
    // 0x28fed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28fed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fed8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FED8u;
    {
        const bool branch_taken_0x28fed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FED8u;
        // 0x28fedc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fed8) {
            ctx->pc = 0x28FEECu;
            goto label_28feec;
        }
    }
    ctx->pc = 0x28FEE0u;
    // 0x28fee0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28fee4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28fee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28fee8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28feec:
    // 0x28feec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28feecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fef0: 0x26970008  addiu       $s7, $s4, 0x8
    ctx->pc = 0x28fef0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x28fef4: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x28fef4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x28fef8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28fef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fefc: 0x0  nop
    ctx->pc = 0x28fefcu;
    // NOP
label_28ff00:
    // 0x28ff00: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FF00u;
    SET_GPR_U32(ctx, 31, 0x28FF08u);
    ctx->pc = 0x28FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF00u;
    // 0x28ff04: 0x27c5abb0  addiu       $a1, $fp, -0x5450 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FF00u, 0x28FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF08u;
label_28ff08:
    // 0x28ff08: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x28ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x28ff0c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x28ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x28ff10: 0x8c550078  lw          $s5, 0x78($v0)
    ctx->pc = 0x28ff10u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x28ff14: 0x2e39021  addu        $s2, $s7, $v1
    ctx->pc = 0x28ff14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x28ff18: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x28ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x28ff1c: 0x1222002b  beq         $s1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x28FF1Cu;
    {
        const bool branch_taken_0x28ff1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x28FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF1Cu;
        // 0x28ff20: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff1c) {
            ctx->pc = 0x28FFCCu;
            goto label_28ffcc;
        }
    }
    ctx->pc = 0x28FF24u;
    // 0x28ff24: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x28ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x28ff28: 0x16230007  bne         $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28FF28u;
    {
        const bool branch_taken_0x28ff28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x28ff28) {
            ctx->pc = 0x28FF48u;
            goto label_28ff48;
        }
    }
    ctx->pc = 0x28FF30u;
    // 0x28ff30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28ff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff34: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FF34u;
    SET_GPR_U32(ctx, 31, 0x28FF3Cu);
    ctx->pc = 0x28FF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF34u;
    // 0x28ff38: 0x26c5abc8  addiu       $a1, $s6, -0x5438 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FF34u, 0x28FF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF3Cu;
label_28ff3c:
    // 0x28ff3c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x28FF3Cu;
    {
        const bool branch_taken_0x28ff3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF3Cu;
        // 0x28ff40: 0xae8200d8  sw          $v0, 0xD8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff3c) {
            ctx->pc = 0x28FFCCu;
            goto label_28ffcc;
        }
    }
    ctx->pc = 0x28FF44u;
    // 0x28ff44: 0x0  nop
    ctx->pc = 0x28ff44u;
    // NOP
label_28ff48:
    // 0x28ff48: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x28FF48u;
    SET_GPR_U32(ctx, 31, 0x28FF50u);
    ctx->pc = 0x28FF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF48u;
    // 0x28ff4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x28FF48u, 0x28FF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF50u;
label_28ff50:
    // 0x28ff50: 0xc08e498  jal         func_239260
    ctx->pc = 0x28FF50u;
    SET_GPR_U32(ctx, 31, 0x28FF58u);
    ctx->pc = 0x28FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF50u;
    // 0x28ff54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239260u, 0x28FF50u, 0x28FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF58u;
label_28ff58:
    // 0x28ff58: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x28ff58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x28ff5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28ff5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff60: 0x24653dd0  addiu       $a1, $v1, 0x3DD0
    ctx->pc = 0x28ff60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 15824));
    // 0x28ff64: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x28FF64u;
    SET_GPR_U32(ctx, 31, 0x28FF6Cu);
    ctx->pc = 0x28FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF64u;
    // 0x28ff68: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x28FF64u, 0x28FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF6Cu;
label_28ff6c:
    // 0x28ff6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28ff6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff70: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FF70u;
    SET_GPR_U32(ctx, 31, 0x28FF78u);
    ctx->pc = 0x28FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF70u;
    // 0x28ff74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FF70u, 0x28FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF78u;
label_28ff78:
    // 0x28ff78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ff78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff7c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28FF7Cu;
    {
        const bool branch_taken_0x28ff7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF7Cu;
        // 0x28ff80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff7c) {
            ctx->pc = 0x28FFCCu;
            goto label_28ffcc;
        }
    }
    ctx->pc = 0x28FF84u;
    // 0x28ff84: 0xc086304  jal         func_218C10
    ctx->pc = 0x28FF84u;
    SET_GPR_U32(ctx, 31, 0x28FF8Cu);
    ctx->pc = 0x28FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF84u;
    // 0x28ff88: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x28FF84u, 0x28FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF8Cu;
label_28ff8c:
    // 0x28ff8c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28FF8Cu;
    {
        const bool branch_taken_0x28ff8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF8Cu;
        // 0x28ff90: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff8c) {
            ctx->pc = 0x28FFB0u;
            goto label_28ffb0;
        }
    }
    ctx->pc = 0x28FF94u;
    // 0x28ff94: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28FF94u;
    {
        const bool branch_taken_0x28ff94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x28FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF94u;
        // 0x28ff98: 0xae150078  sw          $s5, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff94) {
            ctx->pc = 0x28FFB0u;
            goto label_28ffb0;
        }
    }
    ctx->pc = 0x28FF9Cu;
    // 0x28ff9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28ff9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffa0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28FFA0u;
    SET_GPR_U32(ctx, 31, 0x28FFA8u);
    ctx->pc = 0x28FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FFA0u;
    // 0x28ffa4: 0x26c5abc8  addiu       $a1, $s6, -0x5438 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28FFA0u, 0x28FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFA8u;
label_28ffa8:
    // 0x28ffa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ffa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffac: 0xae150078  sw          $s5, 0x78($s0)
    ctx->pc = 0x28ffacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 21));
label_28ffb0:
    // 0x28ffb0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x28ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x28ffb4: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28FFB4u;
    {
        const bool branch_taken_0x28ffb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ffb4) {
            ctx->pc = 0x28FFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FFB4u;
            // 0x28ffb8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FFD0u;
            goto label_28ffd0;
        }
    }
    ctx->pc = 0x28FFBCu;
    // 0x28ffbc: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x28ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x28ffc0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x28ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28ffc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28ffc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28ffc8: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x28ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_28ffcc:
    // 0x28ffcc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28ffccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28ffd0:
    // 0x28ffd0: 0x2a220021  slti        $v0, $s1, 0x21
    ctx->pc = 0x28ffd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x28ffd4: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x28FFD4u;
    {
        const bool branch_taken_0x28ffd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFD4u;
        // 0x28ffd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffd4) {
            ctx->pc = 0x28FF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ff00;
        }
    }
    ctx->pc = 0x28FFDCu;
    // 0x28ffdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ffe0: 0x8e8300ec  lw          $v1, 0xEC($s4)
    ctx->pc = 0x28ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x28ffe4: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x28ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x28ffe8: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x28ffe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28ffec: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x28ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x28fff0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x28fff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28fff4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x28fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28fff8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x28fff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28fffc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x290000: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x290000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290004: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x290004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x290008: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x290008u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29000c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29000cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x290010: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x290010u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x290014: 0x8e8300f0  lw          $v1, 0xF0($s4)
    ctx->pc = 0x290014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x290018: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x290018u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29001c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x29001cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290020: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x290020u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x290024: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x290024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x290028: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x290028u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29002c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x29002cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x290030: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x290030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x290034: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x290034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x290038: 0x8e8300f4  lw          $v1, 0xF4($s4)
    ctx->pc = 0x290038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
    // 0x29003c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x29003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290040: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x290040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x290044: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x290044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x290048: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x290048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29004c: 0x8e8300f8  lw          $v1, 0xF8($s4)
    ctx->pc = 0x29004cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
    // 0x290050: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x290050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290054: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x290054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x290058: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x290058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29005c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29005cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x290060: 0xa68000fe  sh          $zero, 0xFE($s4)
    ctx->pc = 0x290060u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 254), (uint16_t)GPR_U32(ctx, 0));
    // 0x290064: 0xa68000fc  sh          $zero, 0xFC($s4)
    ctx->pc = 0x290064u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 252), (uint16_t)GPR_U32(ctx, 0));
    // 0x290068: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x290068u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29006c: 0x3e00008  jr          $ra
    ctx->pc = 0x29006Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29006Cu;
        // 0x290070: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29006Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290074u;
    // 0x290074: 0x0  nop
    ctx->pc = 0x290074u;
    // NOP
    ctx->pc = 0x290078u;
}
