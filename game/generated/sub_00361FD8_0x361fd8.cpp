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

// Function: sub_00361FD8
// Address: 0x361fd8 - 0x362158
void sub_00361FD8_0x361fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361FD8_0x361fd8");
#endif

    switch (ctx->pc) {
        case 0x361ff0u: goto label_361ff0;
        case 0x362008u: goto label_362008;
        case 0x362028u: goto label_362028;
        case 0x362068u: goto label_362068;
        case 0x362078u: goto label_362078;
        case 0x3620a0u: goto label_3620a0;
        case 0x3620c4u: goto label_3620c4;
        case 0x362100u: goto label_362100;
        case 0x362120u: goto label_362120;
        case 0x362138u: goto label_362138;
        default: break;
    }

    ctx->pc = 0x361fd8u;

    // 0x361fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x361fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x361fdc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x361FDCu;
    {
        const bool branch_taken_0x361fdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x361FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361FDCu;
        // 0x361fe0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361fdc) {
            ctx->pc = 0x361FF8u;
            goto label_361ff8;
        }
    }
    ctx->pc = 0x361FE4u;
    // 0x361fe4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361fe8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361FE8u;
    SET_GPR_U32(ctx, 31, 0x361FF0u);
    ctx->pc = 0x361FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361FE8u;
    // 0x361fec: 0x24847120  addiu       $a0, $a0, 0x7120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361FE8u, 0x361FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361FF0u;
label_361ff0:
    // 0x361ff0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x361FF0u;
    {
        const bool branch_taken_0x361ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361FF0u;
        // 0x361ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361ff0) {
            ctx->pc = 0x361FFCu;
            goto label_361ffc;
        }
    }
    ctx->pc = 0x361FF8u;
label_361ff8:
    // 0x361ff8: 0x8482001c  lh          $v0, 0x1C($a0)
    ctx->pc = 0x361ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
label_361ffc:
    // 0x361ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362000: 0x3e00008  jr          $ra
    ctx->pc = 0x362000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362000u;
        // 0x362004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362008u;
label_362008:
    // 0x362008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36200c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x362010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x362010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362014: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x362014u;
    {
        const bool branch_taken_0x362014 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x362018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362014u;
        // 0x362018: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362014) {
            ctx->pc = 0x362038u;
            goto label_362038;
        }
    }
    ctx->pc = 0x36201Cu;
    // 0x36201c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x36201cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362020: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362020u;
    SET_GPR_U32(ctx, 31, 0x362028u);
    ctx->pc = 0x362024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362020u;
    // 0x362024: 0x24847158  addiu       $a0, $a0, 0x7158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362020u, 0x362028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362028u;
label_362028:
    // 0x362028: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x36202c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36202Cu;
    {
        const bool branch_taken_0x36202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36202Cu;
        // 0x362030: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36202c) {
            ctx->pc = 0x36208Cu;
            goto label_36208c;
        }
    }
    ctx->pc = 0x362034u;
    // 0x362034: 0x0  nop
    ctx->pc = 0x362034u;
    // NOP
label_362038:
    // 0x362038: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x362038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x36203c: 0x8f82c7f0  lw          $v0, -0x3810($gp)
    ctx->pc = 0x36203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952944)));
    // 0x362040: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x362040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x362044: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x362044u;
    {
        const bool branch_taken_0x362044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x362044) {
            ctx->pc = 0x362054u;
            goto label_362054;
        }
    }
    ctx->pc = 0x36204Cu;
    // 0x36204c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36204Cu;
    {
        const bool branch_taken_0x36204c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x36204c) {
            ctx->pc = 0x362060u;
            goto label_362060;
        }
    }
    ctx->pc = 0x362054u;
label_362054:
    // 0x362054: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x362058: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x362058u;
    {
        const bool branch_taken_0x362058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362058u;
        // 0x36205c: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362058) {
            ctx->pc = 0x36208Cu;
            goto label_36208c;
        }
    }
    ctx->pc = 0x362060u;
label_362060:
    // 0x362060: 0xc0d751a  jal         func_35D468
    ctx->pc = 0x362060u;
    SET_GPR_U32(ctx, 31, 0x362068u);
    ctx->pc = 0x35D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D468u, 0x362060u, 0x362068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362068u;
label_362068:
    // 0x362068: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x362068u;
    {
        const bool branch_taken_0x362068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362068u;
        // 0x36206c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362068) {
            ctx->pc = 0x362088u;
            goto label_362088;
        }
    }
    ctx->pc = 0x362070u;
    // 0x362070: 0xc0d92e4  jal         func_364B90
    ctx->pc = 0x362070u;
    SET_GPR_U32(ctx, 31, 0x362078u);
    ctx->pc = 0x364B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364B90u, 0x362070u, 0x362078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362078u;
label_362078:
    // 0x362078: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x362078u;
    {
        const bool branch_taken_0x362078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x362078) {
            ctx->pc = 0x36207Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362078u;
            // 0x36207c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36208Cu;
            goto label_36208c;
        }
    }
    ctx->pc = 0x362080u;
    // 0x362080: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x362080u;
    {
        const bool branch_taken_0x362080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362080u;
        // 0x362084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362080) {
            ctx->pc = 0x36208Cu;
            goto label_36208c;
        }
    }
    ctx->pc = 0x362088u;
label_362088:
    // 0x362088: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36208c:
    // 0x36208c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36208cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362090: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x362090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362094: 0x3e00008  jr          $ra
    ctx->pc = 0x362094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362094u;
        // 0x362098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36209Cu;
    // 0x36209c: 0x0  nop
    ctx->pc = 0x36209cu;
    // NOP
label_3620a0:
    // 0x3620a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3620a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3620a4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x3620a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x3620a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3620a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3620ac: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x3620acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x3620b0: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3620B0u;
    {
        const bool branch_taken_0x3620b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3620B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3620B0u;
        // 0x3620b4: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3620b0) {
            ctx->pc = 0x3620D0u;
            goto label_3620d0;
        }
    }
    ctx->pc = 0x3620B8u;
    // 0x3620b8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3620b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3620bc: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3620BCu;
    SET_GPR_U32(ctx, 31, 0x3620C4u);
    ctx->pc = 0x3620C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3620BCu;
    // 0x3620c0: 0x24847198  addiu       $a0, $a0, 0x7198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3620BCu, 0x3620C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3620C4u;
label_3620c4:
    // 0x3620c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3620c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3620c8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3620C8u;
    {
        const bool branch_taken_0x3620c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3620CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3620C8u;
        // 0x3620cc: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3620c8) {
            ctx->pc = 0x362144u;
            goto label_362144;
        }
    }
    ctx->pc = 0x3620D0u;
label_3620d0:
    // 0x3620d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3620d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3620d4: 0x8f82c7f0  lw          $v0, -0x3810($gp)
    ctx->pc = 0x3620d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952944)));
    // 0x3620d8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3620d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3620dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3620DCu;
    {
        const bool branch_taken_0x3620dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3620E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3620DCu;
        // 0x3620e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3620dc) {
            ctx->pc = 0x3620ECu;
            goto label_3620ec;
        }
    }
    ctx->pc = 0x3620E4u;
    // 0x3620e4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3620E4u;
    {
        const bool branch_taken_0x3620e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3620e4) {
            ctx->pc = 0x3620F8u;
            goto label_3620f8;
        }
    }
    ctx->pc = 0x3620ECu;
label_3620ec:
    // 0x3620ec: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3620ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3620f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3620F0u;
    {
        const bool branch_taken_0x3620f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3620F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3620F0u;
        // 0x3620f4: 0x248471d0  addiu       $a0, $a0, 0x71D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3620f0) {
            ctx->pc = 0x362118u;
            goto label_362118;
        }
    }
    ctx->pc = 0x3620F8u;
label_3620f8:
    // 0x3620f8: 0xc0d7508  jal         func_35D420
    ctx->pc = 0x3620F8u;
    SET_GPR_U32(ctx, 31, 0x362100u);
    ctx->pc = 0x3620FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3620F8u;
    // 0x3620fc: 0x3c118000  lui         $s1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D420u, 0x3620F8u, 0x362100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362100u;
label_362100:
    // 0x362100: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x362100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362104: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x362104u;
    {
        const bool branch_taken_0x362104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x362108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362104u;
        // 0x362108: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362104) {
            ctx->pc = 0x362130u;
            goto label_362130;
        }
    }
    ctx->pc = 0x36210Cu;
    // 0x36210c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x36210cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x362110: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x362110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362114: 0x24847200  addiu       $a0, $a0, 0x7200
    ctx->pc = 0x362114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29184));
label_362118:
    // 0x362118: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362118u;
    SET_GPR_U32(ctx, 31, 0x362120u);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362118u, 0x362120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362120u;
label_362120:
    // 0x362120: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x362124: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x362124u;
    {
        const bool branch_taken_0x362124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362124u;
        // 0x362128: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362124) {
            ctx->pc = 0x362144u;
            goto label_362144;
        }
    }
    ctx->pc = 0x36212Cu;
    // 0x36212c: 0x0  nop
    ctx->pc = 0x36212cu;
    // NOP
label_362130:
    // 0x362130: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x362130u;
    SET_GPR_U32(ctx, 31, 0x362138u);
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x362130u, 0x362138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362138u;
label_362138:
    // 0x362138: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36213c: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x36213cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x362140: 0x223100a  movz        $v0, $s1, $v1
    ctx->pc = 0x362140u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_362144:
    // 0x362144: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x362144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x362148: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x362148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x36214c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x36214cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x362150: 0x3e00008  jr          $ra
    ctx->pc = 0x362150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362150u;
        // 0x362154: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362158u;
}
