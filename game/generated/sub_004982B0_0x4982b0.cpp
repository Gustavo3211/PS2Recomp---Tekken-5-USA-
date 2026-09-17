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

// Function: sub_004982B0
// Address: 0x4982b0 - 0x498810
void sub_004982B0_0x4982b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004982B0_0x4982b0");
#endif

    switch (ctx->pc) {
        case 0x4982d0u: goto label_4982d0;
        case 0x4982f0u: goto label_4982f0;
        case 0x49830cu: goto label_49830c;
        case 0x498328u: goto label_498328;
        case 0x4983c0u: goto label_4983c0;
        case 0x4983d0u: goto label_4983d0;
        case 0x498408u: goto label_498408;
        case 0x498410u: goto label_498410;
        case 0x498420u: goto label_498420;
        case 0x498458u: goto label_498458;
        case 0x498488u: goto label_498488;
        case 0x4984c0u: goto label_4984c0;
        case 0x4984f0u: goto label_4984f0;
        case 0x498528u: goto label_498528;
        case 0x498530u: goto label_498530;
        case 0x498538u: goto label_498538;
        case 0x498568u: goto label_498568;
        case 0x49859cu: goto label_49859c;
        case 0x4985a4u: goto label_4985a4;
        case 0x4985acu: goto label_4985ac;
        case 0x4985d8u: goto label_4985d8;
        case 0x498698u: goto label_498698;
        default: break;
    }

    ctx->pc = 0x4982b0u;

    // 0x4982b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4982b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4982b4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x4982b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x4982b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4982b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4982bc: 0x24847e20  addiu       $a0, $a0, 0x7E20
    ctx->pc = 0x4982bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32288));
    // 0x4982c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4982c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4982c4: 0x8123bf2  j           func_48EFC8
    ctx->pc = 0x4982C4u;
    ctx->pc = 0x4982C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4982C4u;
    // 0x4982c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EFC8u;
    sub_0048EFC8_0x48efc8(rdram, ctx, runtime); return;
    ctx->pc = 0x4982CCu;
    // 0x4982cc: 0x0  nop
    ctx->pc = 0x4982ccu;
    // NOP
label_4982d0:
    // 0x4982d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4982d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4982d4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x4982d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x4982d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4982d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4982dc: 0x24847e30  addiu       $a0, $a0, 0x7E30
    ctx->pc = 0x4982dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32304));
    // 0x4982e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4982e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4982e4: 0x8123bf2  j           func_48EFC8
    ctx->pc = 0x4982E4u;
    ctx->pc = 0x4982E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4982E4u;
    // 0x4982e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EFC8u;
    sub_0048EFC8_0x48efc8(rdram, ctx, runtime); return;
    ctx->pc = 0x4982ECu;
    // 0x4982ec: 0x0  nop
    ctx->pc = 0x4982ecu;
    // NOP
label_4982f0:
    // 0x4982f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4982f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4982f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4982f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4982f8: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4982f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4982fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4982fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x498300: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x498304: 0xc124620  jal         func_491880
    ctx->pc = 0x498304u;
    SET_GPR_U32(ctx, 31, 0x49830Cu);
    ctx->pc = 0x498308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498304u;
    // 0x498308: 0x2411002a  addiu       $s1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x498304u, 0x49830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49830Cu;
label_49830c:
    // 0x49830c: 0x26100b38  addiu       $s0, $s0, 0xB38
    ctx->pc = 0x49830cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2872));
    // 0x498310: 0x34019800  ori         $at, $zero, 0x9800
    ctx->pc = 0x498310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x498314: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x498314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x498318: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x498318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49831c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x49831cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498320: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x498320u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x498324: 0x0  nop
    ctx->pc = 0x498324u;
    // NOP
label_498328:
    // 0x498328: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x498328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49832c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49832cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498330: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x498330u;
    {
        const bool branch_taken_0x498330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498330u;
        // 0x498334: 0x24a40002  addiu       $a0, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498330) {
            ctx->pc = 0x498390u;
            goto label_498390;
        }
    }
    ctx->pc = 0x498338u;
    // 0x498338: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x498338u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49833c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x49833cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x498340: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x498340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x498344: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x498344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x498348: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x498348u;
    {
        const bool branch_taken_0x498348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498348u;
        // 0x49834c: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498348) {
            ctx->pc = 0x498378u;
            goto label_498378;
        }
    }
    ctx->pc = 0x498350u;
    // 0x498350: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x498350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x498354: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x498354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498358: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x498358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x49835c: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x49835cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x498360: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x498360u;
    {
        const bool branch_taken_0x498360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x498360) {
            ctx->pc = 0x498364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498360u;
            // 0x498364: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498390u;
            goto label_498390;
        }
    }
    ctx->pc = 0x498368u;
    // 0x498368: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x498368u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49836c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x498370: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x498370u;
    {
        const bool branch_taken_0x498370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498370u;
        // 0x498374: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498370) {
            ctx->pc = 0x498390u;
            goto label_498390;
        }
    }
    ctx->pc = 0x498378u;
label_498378:
    // 0x498378: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x498378u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49837c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x49837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x498380: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x498380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x498384: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x498384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498388: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x498388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x49838c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49838cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_498390:
    // 0x498390: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x498390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x498394: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x498394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x498398: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x498398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49839c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x49839cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4983a0: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x4983a0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4983a4: 0x621ffe0  bgez        $s1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x4983A4u;
    {
        const bool branch_taken_0x4983a4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x4983A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4983A4u;
        // 0x4983a8: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4983a4) {
            ctx->pc = 0x498328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_498328;
        }
    }
    ctx->pc = 0x4983ACu;
    // 0x4983ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4983acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4983b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4983b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4983b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4983b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4983b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4983B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4983BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4983B8u;
        // 0x4983bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4983B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4983C0u;
label_4983c0:
    // 0x4983c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4983c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4983c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4983c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4983c8: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4983C8u;
    SET_GPR_U32(ctx, 31, 0x4983D0u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4983C8u, 0x4983D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4983D0u;
label_4983d0:
    // 0x4983d0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4983d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4983d4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x4983d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4983d8: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x4983d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4983dc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4983dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4983e0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4983e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4983e4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x4983e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x4983e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4983e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4983ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4983ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4983f0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4983f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4983f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4983f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4983f8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4983f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4983fc: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4983fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x498400: 0xc124c3c  jal         func_4930F0
    ctx->pc = 0x498400u;
    SET_GPR_U32(ctx, 31, 0x498408u);
    ctx->pc = 0x498404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498400u;
    // 0x498404: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4930F0u, 0x498400u, 0x498408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498408u;
label_498408:
    // 0x498408: 0xc124642  jal         func_491908
    ctx->pc = 0x498408u;
    SET_GPR_U32(ctx, 31, 0x498410u);
    ctx->pc = 0x491908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491908u, 0x498408u, 0x498410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498410u;
label_498410:
    // 0x498410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498414: 0x81260bc  j           func_4982F0
    ctx->pc = 0x498414u;
    ctx->pc = 0x498418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498414u;
    // 0x498418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4982F0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4982f0;
    ctx->pc = 0x49841Cu;
    // 0x49841c: 0x0  nop
    ctx->pc = 0x49841cu;
    // NOP
label_498420:
    // 0x498420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x498420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x498424: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x498424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x498428: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x498428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49842c: 0x2451d680  addiu       $s1, $v0, -0x2980
    ctx->pc = 0x49842cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x498430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x498430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x498434: 0x26300016  addiu       $s0, $s1, 0x16
    ctx->pc = 0x498434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
    // 0x498438: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x498438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D696u));
    // 0x49843c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49843cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x498440: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x498440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x498444: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x498444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x498448: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x498448u;
    {
        const bool branch_taken_0x498448 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x49844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498448u;
        // 0x49844c: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498448) {
            ctx->pc = 0x498470u;
            goto label_498470;
        }
    }
    ctx->pc = 0x498450u;
    // 0x498450: 0xc1233ec  jal         func_48CFB0
    ctx->pc = 0x498450u;
    SET_GPR_U32(ctx, 31, 0x498458u);
    ctx->pc = 0x498454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498450u;
    // 0x498454: 0x240400e1  addiu       $a0, $zero, 0xE1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CFB0u, 0x498450u, 0x498458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498458u;
label_498458:
    // 0x498458: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x498458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x49845c: 0x2623000e  addiu       $v1, $s1, 0xE
    ctx->pc = 0x49845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
    // 0x498460: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x498460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498464: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x498464u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x498468: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x498468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49846c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49846cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_498470:
    // 0x498470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x498470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x498474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x498478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49847c: 0x3e00008  jr          $ra
    ctx->pc = 0x49847Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49847Cu;
        // 0x498480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49847Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498484u;
    // 0x498484: 0x0  nop
    ctx->pc = 0x498484u;
    // NOP
label_498488:
    // 0x498488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x498488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49848c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49848cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x498490: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x498490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x498494: 0x2451d680  addiu       $s1, $v0, -0x2980
    ctx->pc = 0x498494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x498498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x498498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49849c: 0x26300016  addiu       $s0, $s1, 0x16
    ctx->pc = 0x49849cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
    // 0x4984a0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4984a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D696u));
    // 0x4984a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4984a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4984a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4984a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4984ac: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4984acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4984b0: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4984B0u;
    {
        const bool branch_taken_0x4984b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4984B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4984B0u;
        // 0x4984b4: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4984b0) {
            ctx->pc = 0x4984D8u;
            goto label_4984d8;
        }
    }
    ctx->pc = 0x4984B8u;
    // 0x4984b8: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x4984B8u;
    SET_GPR_U32(ctx, 31, 0x4984C0u);
    ctx->pc = 0x4984BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4984B8u;
    // 0x4984bc: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x4984B8u, 0x4984C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4984C0u;
label_4984c0:
    // 0x4984c0: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x4984c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x4984c4: 0x2623000e  addiu       $v1, $s1, 0xE
    ctx->pc = 0x4984c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
    // 0x4984c8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4984c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4984cc: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x4984ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4984d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4984d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4984d4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4984d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4984d8:
    // 0x4984d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4984d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4984dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4984dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4984e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4984e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4984e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4984E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4984E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4984E4u;
        // 0x4984e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4984E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4984ECu;
    // 0x4984ec: 0x0  nop
    ctx->pc = 0x4984ecu;
    // NOP
label_4984f0:
    // 0x4984f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4984f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4984f4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4984f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4984f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4984f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4984fc: 0x2451d680  addiu       $s1, $v0, -0x2980
    ctx->pc = 0x4984fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x498500: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x498500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x498504: 0x26300016  addiu       $s0, $s1, 0x16
    ctx->pc = 0x498504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
    // 0x498508: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x498508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D696u));
    // 0x49850c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x498510: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x498510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x498514: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x498514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x498518: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x498518u;
    {
        const bool branch_taken_0x498518 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x49851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498518u;
        // 0x49851c: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498518) {
            ctx->pc = 0x498550u;
            goto label_498550;
        }
    }
    ctx->pc = 0x498520u;
    // 0x498520: 0xc1233ec  jal         func_48CFB0
    ctx->pc = 0x498520u;
    SET_GPR_U32(ctx, 31, 0x498528u);
    ctx->pc = 0x498524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498520u;
    // 0x498524: 0x240400e2  addiu       $a0, $zero, 0xE2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CFB0u, 0x498520u, 0x498528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498528u;
label_498528:
    // 0x498528: 0xc1233ec  jal         func_48CFB0
    ctx->pc = 0x498528u;
    SET_GPR_U32(ctx, 31, 0x498530u);
    ctx->pc = 0x49852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498528u;
    // 0x49852c: 0x240400e3  addiu       $a0, $zero, 0xE3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CFB0u, 0x498528u, 0x498530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498530u;
label_498530:
    // 0x498530: 0xc129632  jal         func_4A58C8
    ctx->pc = 0x498530u;
    SET_GPR_U32(ctx, 31, 0x498538u);
    ctx->pc = 0x498534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498530u;
    // 0x498534: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A58C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A58C8u, 0x498530u, 0x498538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498538u;
label_498538:
    // 0x498538: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x498538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x49853c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x49853cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x498540: 0x2624000e  addiu       $a0, $s1, 0xE
    ctx->pc = 0x498540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
    // 0x498544: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x498544u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x498548: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x498548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49854c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x49854cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_498550:
    // 0x498550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x498550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498554: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x498554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x498558: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49855c: 0x3e00008  jr          $ra
    ctx->pc = 0x49855Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49855Cu;
        // 0x498560: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49855Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498564u;
    // 0x498564: 0x0  nop
    ctx->pc = 0x498564u;
    // NOP
label_498568:
    // 0x498568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x498568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49856c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49856cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x498570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x498570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x498574: 0x2450d680  addiu       $s0, $v0, -0x2980
    ctx->pc = 0x498574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x498578: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x498578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x49857c: 0x26040016  addiu       $a0, $s0, 0x16
    ctx->pc = 0x49857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
    // 0x498580: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x498580u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D696u));
    // 0x498584: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x498584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x498588: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x498588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49858c: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x49858Cu;
    {
        const bool branch_taken_0x49858c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x498590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49858Cu;
        // 0x498590: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49858c) {
            ctx->pc = 0x4985C8u;
            goto label_4985c8;
        }
    }
    ctx->pc = 0x498594u;
    // 0x498594: 0xc1233c0  jal         func_48CF00
    ctx->pc = 0x498594u;
    SET_GPR_U32(ctx, 31, 0x49859Cu);
    ctx->pc = 0x48CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF00u, 0x498594u, 0x49859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49859Cu;
label_49859c:
    // 0x49859c: 0xc12a604  jal         func_4A9810
    ctx->pc = 0x49859Cu;
    SET_GPR_U32(ctx, 31, 0x4985A4u);
    ctx->pc = 0x4985A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49859Cu;
    // 0x4985a0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9810u, 0x49859Cu, 0x4985A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4985A4u;
label_4985a4:
    // 0x4985a4: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x4985A4u;
    SET_GPR_U32(ctx, 31, 0x4985ACu);
    ctx->pc = 0x4985A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4985A4u;
    // 0x4985a8: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x4985A4u, 0x4985ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4985ACu;
label_4985ac:
    // 0x4985ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4985acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4985b0: 0xa6020096  sh          $v0, 0x96($s0)
    ctx->pc = 0x4985b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x4985b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4985b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4985b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4985b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4985bc: 0x8122cc6  j           func_48B318
    ctx->pc = 0x4985BCu;
    ctx->pc = 0x4985C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4985BCu;
    // 0x4985c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B318u;
    sub_0048B318_0x48b318(rdram, ctx, runtime); return;
    ctx->pc = 0x4985C4u;
    // 0x4985c4: 0x0  nop
    ctx->pc = 0x4985c4u;
    // NOP
label_4985c8:
    // 0x4985c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4985c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4985cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4985ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4985d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4985D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4985D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4985D0u;
        // 0x4985d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4985D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4985D8u;
label_4985d8:
    // 0x4985d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4985d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4985dc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4985dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4985e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4985e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4985e4: 0x2493011c  addiu       $s3, $a0, 0x11C
    ctx->pc = 0x4985e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
    // 0x4985e8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4985e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4985ec: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x4985ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x4985f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4985f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4985f4: 0x24450b1c  addiu       $a1, $v0, 0xB1C
    ctx->pc = 0x4985f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2844));
    // 0x4985f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4985f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4985fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4985fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x498600: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x498600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x498604: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x498604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x498608: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x498608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x49860c: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x49860cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x498610: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x498610u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B1Cu));
    // 0x498614: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x498614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x498618: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x498618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49861c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x49861cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x498620: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x498620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x498624: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x498624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498628: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x498628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x49862c: 0x5040006e  beql        $v0, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x49862Cu;
    {
        const bool branch_taken_0x49862c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49862c) {
            ctx->pc = 0x498630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49862Cu;
            // 0x498630: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4987E8u;
            goto label_4987e8;
        }
    }
    ctx->pc = 0x498634u;
    // 0x498634: 0x24840124  addiu       $a0, $a0, 0x124
    ctx->pc = 0x498634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    // 0x498638: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49863c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x498640: 0x24121000  addiu       $s2, $zero, 0x1000
    ctx->pc = 0x498640u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x498644: 0x24147fff  addiu       $s4, $zero, 0x7FFF
    ctx->pc = 0x498644u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x498648: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x498648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x49864c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49864cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x498650: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x498650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x498654: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498658: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x498658u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49865c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49865cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498660: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x498660u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498664: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x498664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x498668: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x498668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x49866c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49866cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498670: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x498670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x498674: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x498674u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498678: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x498678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49867c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49867cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x498680: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x498680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x498684: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x498684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x498688: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49868c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49868cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x498690: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x498690u;
    SET_GPR_U32(ctx, 31, 0x498698u);
    ctx->pc = 0x498694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498690u;
    // 0x498694: 0x84a40000  lh          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x498690u, 0x498698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498698u;
label_498698:
    // 0x498698: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x498698u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x49869c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49869cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4986a0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4986a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4986a4: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4986a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4986a8: 0x24a50b38  addiu       $a1, $a1, 0xB38
    ctx->pc = 0x4986a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2872));
    // 0x4986ac: 0x24750040  addiu       $s5, $v1, 0x40
    ctx->pc = 0x4986acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x4986b0: 0x25080b20  addiu       $t0, $t0, 0xB20
    ctx->pc = 0x4986b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2848));
    // 0x4986b4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4986b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x72D6C0u));
    // 0x4986b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4986b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4986bc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4986bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0B20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B20u, _value); } while (0);
    // 0x4986c0: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4986c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4986c4: 0x24890002  addiu       $t1, $a0, 0x2
    ctx->pc = 0x4986c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4986c8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4986c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0B38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B38u, _value); } while (0);
    // 0x4986cc: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x4986ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x4986d0: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x4986d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x4986d4: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x4986d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x7F0B38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B38u, _value); } while (0);
    // 0x4986d8: 0x248a0004  addiu       $t2, $a0, 0x4
    ctx->pc = 0x4986d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4986dc: 0x248c0006  addiu       $t4, $a0, 0x6
    ctx->pc = 0x4986dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x4986e0: 0x24c60b28  addiu       $a2, $a2, 0xB28
    ctx->pc = 0x4986e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2856));
    // 0x4986e4: 0x94620092  lhu         $v0, 0x92($v1)
    ctx->pc = 0x4986e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D712u));
    // 0x4986e8: 0x248b000a  addiu       $t3, $a0, 0xA
    ctx->pc = 0x4986e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x4986ec: 0x248d000c  addiu       $t5, $a0, 0xC
    ctx->pc = 0x4986ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x4986f0: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x4986f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4986f4: 0x244206a1  addiu       $v0, $v0, 0x6A1
    ctx->pc = 0x4986f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1697));
    // 0x4986f8: 0x2491001a  addiu       $s1, $a0, 0x1A
    ctx->pc = 0x4986f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 26));
    // 0x4986fc: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4986fcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x498700: 0x2489000e  addiu       $t1, $a0, 0xE
    ctx->pc = 0x498700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
    // 0x498704: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x498704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x7F0B38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B38u, _value); } while (0);
    // 0x498708: 0x248e0014  addiu       $t6, $a0, 0x14
    ctx->pc = 0x498708u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x49870c: 0xa5400000  sh          $zero, 0x0($t2)
    ctx->pc = 0x49870cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x498710: 0x248a0012  addiu       $t2, $a0, 0x12
    ctx->pc = 0x498710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 18));
    // 0x498714: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x498714u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x7F0B38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B38u, _value); } while (0);
    // 0x498718: 0x248f0016  addiu       $t7, $a0, 0x16
    ctx->pc = 0x498718u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 22));
    // 0x49871c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x49871cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x498720: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x498720u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x498724: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x498724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x498728: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x498728u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B28u));
    // 0x49872c: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x49872cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x498730: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498734: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498738: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x498738u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x49873c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49873cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498740: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x498740u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x498744: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x498744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x498748: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x498748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x49874c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49874cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498750: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x498750u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x498754: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498758: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x498758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49875c: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x49875cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x498760: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x498760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x498764: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498768: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x498768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x49876c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x49876cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x498770: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x498770u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x498774: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x498774u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x498778: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x498778u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49877c: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x49877cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x498780: 0xa5720000  sh          $s2, 0x0($t3)
    ctx->pc = 0x498780u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x498784: 0xacad0000  sw          $t5, 0x0($a1)
    ctx->pc = 0x498784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 13));
    // 0x498788: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x498788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49878c: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x49878cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x498790: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x498790u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x498794: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x498794u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x498798: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x498798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x49879c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x49879cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4987a0: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4987a0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4987a4: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x4987a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x4987a8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4987a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4987ac: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x4987acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x4987b0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4987b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4987b4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4987b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4987b8: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x4987b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x4987bc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4987bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4987c0: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4987c0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4987c4: 0xacae0000  sw          $t6, 0x0($a1)
    ctx->pc = 0x4987c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
    // 0x4987c8: 0xa5c00000  sh          $zero, 0x0($t6)
    ctx->pc = 0x4987c8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4987cc: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x4987ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
    // 0x4987d0: 0xa5f40000  sh          $s4, 0x0($t7)
    ctx->pc = 0x4987d0u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x4987d4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4987d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4987d8: 0xa4930000  sh          $s3, 0x0($a0)
    ctx->pc = 0x4987d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x4987dc: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x4987dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x4987e0: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x4987e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x4987e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4987e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4987e8:
    // 0x4987e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4987e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4987ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4987ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4987f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4987f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4987f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4987f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4987f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4987f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4987fc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4987fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x498800: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x498800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x498804: 0x3e00008  jr          $ra
    ctx->pc = 0x498804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498804u;
        // 0x498808: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49880Cu;
    // 0x49880c: 0x0  nop
    ctx->pc = 0x49880cu;
    // NOP
    ctx->pc = 0x498810u;
}
