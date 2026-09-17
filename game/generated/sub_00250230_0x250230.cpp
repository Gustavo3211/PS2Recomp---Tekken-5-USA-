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

// Function: sub_00250230
// Address: 0x250230 - 0x250328
void sub_00250230_0x250230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250230_0x250230");
#endif

    switch (ctx->pc) {
        case 0x250260u: goto label_250260;
        case 0x25028cu: goto label_25028c;
        case 0x2502dcu: goto label_2502dc;
        case 0x250310u: goto label_250310;
        default: break;
    }

    ctx->pc = 0x250230u;

    // 0x250230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250234: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x250234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x250238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x250238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25023c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x25023cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x250240: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x250240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x250244: 0x8602011c  lh          $v0, 0x11C($s0)
    ctx->pc = 0x250244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x250248: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250248u;
    {
        const bool branch_taken_0x250248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250248u;
        // 0x25024c: 0x261100c0  addiu       $s1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250248) {
            ctx->pc = 0x250260u;
            goto label_250260;
        }
    }
    ctx->pc = 0x250250u;
    // 0x250250: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x250250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250254: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x250254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250258: 0xc093c66  jal         func_24F198
    ctx->pc = 0x250258u;
    SET_GPR_U32(ctx, 31, 0x250260u);
    ctx->pc = 0x25025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250258u;
    // 0x25025c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F198u, 0x250258u, 0x250260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250260u;
label_250260:
    // 0x250260: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x250260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x250264: 0x920300eb  lbu         $v1, 0xEB($s0)
    ctx->pc = 0x250264u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 235)));
    // 0x250268: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x250268u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x25026c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x250270: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x250270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x250274: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x250274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x250278: 0x8ca588d0  lw          $a1, -0x7730($a1)
    ctx->pc = 0x250278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936784)));
    // 0x25027c: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25027Cu;
    {
        const bool branch_taken_0x25027c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25027c) {
            ctx->pc = 0x250280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25027Cu;
            // 0x250280: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2502A8u;
            goto label_2502a8;
        }
    }
    ctx->pc = 0x250284u;
    // 0x250284: 0xc080a1a  jal         func_202868
    ctx->pc = 0x250284u;
    SET_GPR_U32(ctx, 31, 0x25028Cu);
    ctx->pc = 0x250288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250284u;
    // 0x250288: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202868u, 0x250284u, 0x25028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25028Cu;
label_25028c:
    // 0x25028c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x25028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250290: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x250290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250294: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x250294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250298: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x250298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x25029c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x25029cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2502a0: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2502a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2502a4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2502a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2502a8:
    // 0x2502a8: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x2502a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936748)));
    // 0x2502ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2502ACu;
    {
        const bool branch_taken_0x2502ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2502B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502ACu;
        // 0x2502b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502ac) {
            ctx->pc = 0x2502C4u;
            goto label_2502c4;
        }
    }
    ctx->pc = 0x2502B4u;
    // 0x2502b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2502b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2502b8: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x2502b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x2502bc: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2502bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2502c0: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2502c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2502c4:
    // 0x2502c4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2502C4u;
    {
        const bool branch_taken_0x2502c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2502C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502C4u;
        // 0x2502c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502c4) {
            ctx->pc = 0x2502E4u;
            goto label_2502e4;
        }
    }
    ctx->pc = 0x2502CCu;
    // 0x2502cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2502ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2502d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502d4: 0xc093e68  jal         func_24F9A0
    ctx->pc = 0x2502D4u;
    SET_GPR_U32(ctx, 31, 0x2502DCu);
    ctx->pc = 0x2502D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2502D4u;
    // 0x2502d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F9A0u, 0x2502D4u, 0x2502DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502DCu;
label_2502dc:
    // 0x2502dc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2502DCu;
    {
        const bool branch_taken_0x2502dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2502dc) {
            ctx->pc = 0x2502E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2502DCu;
            // 0x2502e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250314u;
            goto label_250314;
        }
    }
    ctx->pc = 0x2502E4u;
label_2502e4:
    // 0x2502e4: 0x86020064  lh          $v0, 0x64($s0)
    ctx->pc = 0x2502e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2502e8: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x2502e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x2502ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2502ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2502f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2502F0u;
    {
        const bool branch_taken_0x2502f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2502F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502F0u;
        // 0x2502f4: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502f0) {
            ctx->pc = 0x250308u;
            goto label_250308;
        }
    }
    ctx->pc = 0x2502F8u;
    // 0x2502f8: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x2502f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x2502fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2502fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x250300: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x250300u;
    {
        const bool branch_taken_0x250300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250300u;
        // 0x250304: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250300) {
            ctx->pc = 0x250310u;
            goto label_250310;
        }
    }
    ctx->pc = 0x250308u;
label_250308:
    // 0x250308: 0xc0947f6  jal         func_251FD8
    ctx->pc = 0x250308u;
    SET_GPR_U32(ctx, 31, 0x250310u);
    ctx->pc = 0x25030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250308u;
    // 0x25030c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251FD8u, 0x250308u, 0x250310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250310u;
label_250310:
    // 0x250310: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x250310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_250314:
    // 0x250314: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x250314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x250318: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x250318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25031c: 0x3e00008  jr          $ra
    ctx->pc = 0x25031Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25031Cu;
        // 0x250320: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25031Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250324u;
    // 0x250324: 0x0  nop
    ctx->pc = 0x250324u;
    // NOP
    ctx->pc = 0x250328u;
}
