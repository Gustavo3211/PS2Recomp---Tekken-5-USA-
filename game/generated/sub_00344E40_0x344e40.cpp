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

// Function: sub_00344E40
// Address: 0x344e40 - 0x345090
void sub_00344E40_0x344e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344E40_0x344e40");
#endif

    switch (ctx->pc) {
        case 0x344e44u: goto label_344e44;
        case 0x344e48u: goto label_344e48;
        case 0x344e60u: goto label_344e60;
        case 0x344e84u: goto label_344e84;
        case 0x344eb4u: goto label_344eb4;
        case 0x344ed8u: goto label_344ed8;
        case 0x344ef4u: goto label_344ef4;
        case 0x344f28u: goto label_344f28;
        case 0x344f4cu: goto label_344f4c;
        case 0x344f60u: goto label_344f60;
        case 0x344f88u: goto label_344f88;
        case 0x344fa4u: goto label_344fa4;
        case 0x344fd8u: goto label_344fd8;
        case 0x344ffcu: goto label_344ffc;
        case 0x34500cu: goto label_34500c;
        case 0x345040u: goto label_345040;
        case 0x34506cu: goto label_34506c;
        default: break;
    }

    ctx->pc = 0x344e40u;

    // 0x344e40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x344e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_344e44:
    // 0x344e44: 0xa2220047  sb          $v0, 0x47($s1)
    ctx->pc = 0x344e44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 71), (uint8_t)GPR_U32(ctx, 2));
label_344e48:
    // 0x344e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344e4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344e50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344e54: 0x3e00008  jr          $ra
    ctx->pc = 0x344E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E54u;
        // 0x344e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344E5Cu;
    // 0x344e5c: 0x0  nop
    ctx->pc = 0x344e5cu;
    // NOP
label_344e60:
    // 0x344e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344e64: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x344e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344e68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344e6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344e70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x344e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x344e74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x344e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344e78: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x344e78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x344e7c: 0xc043192  jal         func_10C648
    ctx->pc = 0x344E7Cu;
    SET_GPR_U32(ctx, 31, 0x344E84u);
    ctx->pc = 0x344E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344E7Cu;
    // 0x344e80: 0x92050044  lbu         $a1, 0x44($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C648u, 0x344E7Cu, 0x344E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344E84u;
label_344e84:
    // 0x344e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344e88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x344e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344e8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x344E8Cu;
    {
        const bool branch_taken_0x344e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E8Cu;
        // 0x344e90: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e8c) {
            ctx->pc = 0x344EA8u;
            goto label_344ea8;
        }
    }
    ctx->pc = 0x344E94u;
    // 0x344e94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344e98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344e9c: 0x80d143c  j           func_3450F0
    ctx->pc = 0x344E9Cu;
    ctx->pc = 0x344EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344E9Cu;
    // 0x344ea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3450F0u;
    sub_003450F0_0x3450f0(rdram, ctx, runtime); return;
    ctx->pc = 0x344EA4u;
    // 0x344ea4: 0x0  nop
    ctx->pc = 0x344ea4u;
    // NOP
label_344ea8:
    // 0x344ea8: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x344ea8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x344eac: 0xc0431e0  jal         func_10C780
    ctx->pc = 0x344EACu;
    SET_GPR_U32(ctx, 31, 0x344EB4u);
    ctx->pc = 0x344EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344EACu;
    // 0x344eb0: 0x92050044  lbu         $a1, 0x44($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C780u, 0x344EACu, 0x344EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344EB4u;
label_344eb4:
    // 0x344eb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344eb8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x344EB8u;
    {
        const bool branch_taken_0x344eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x344eb8) {
            ctx->pc = 0x344EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344EB8u;
            // 0x344ebc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344ECCu;
            goto label_344ecc;
        }
    }
    ctx->pc = 0x344EC0u;
    // 0x344ec0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x344ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x344ec4: 0xa2020047  sb          $v0, 0x47($s0)
    ctx->pc = 0x344ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x344ec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_344ecc:
    // 0x344ecc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x344ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344ED0u;
        // 0x344ed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344ED8u;
label_344ed8:
    // 0x344ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344ee4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x344ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x344ee8: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x344ee8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x344eec: 0xc0430e2  jal         func_10C388
    ctx->pc = 0x344EECu;
    SET_GPR_U32(ctx, 31, 0x344EF4u);
    ctx->pc = 0x344EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344EECu;
    // 0x344ef0: 0x92050044  lbu         $a1, 0x44($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C388u, 0x344EECu, 0x344EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344EF4u;
label_344ef4:
    // 0x344ef4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344ef8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x344EF8u;
    {
        const bool branch_taken_0x344ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x344ef8) {
            ctx->pc = 0x344F10u;
            goto label_344f10;
        }
    }
    ctx->pc = 0x344F00u;
    // 0x344f00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x344f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344f04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x344F04u;
    {
        const bool branch_taken_0x344f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F04u;
        // 0x344f08: 0xa2020047  sb          $v0, 0x47($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344f04) {
            ctx->pc = 0x344F18u;
            goto label_344f18;
        }
    }
    ctx->pc = 0x344F0Cu;
    // 0x344f0c: 0x0  nop
    ctx->pc = 0x344f0cu;
    // NOP
label_344f10:
    // 0x344f10: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x344F10u;
    {
        const bool branch_taken_0x344f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344f10) {
            ctx->pc = 0x344F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344F10u;
            // 0x344f14: 0xa2030047  sb          $v1, 0x47($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344F18u;
            goto label_344f18;
        }
    }
    ctx->pc = 0x344F18u;
label_344f18:
    // 0x344f18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344f1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344f20: 0x3e00008  jr          $ra
    ctx->pc = 0x344F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F20u;
        // 0x344f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344F28u;
label_344f28:
    // 0x344f28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344f2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344f30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344f34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x344f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x344f38: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x344f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344f3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344f40: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x344f40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x344f44: 0xc0432ce  jal         func_10CB38
    ctx->pc = 0x344F44u;
    SET_GPR_U32(ctx, 31, 0x344F4Cu);
    ctx->pc = 0x344F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344F44u;
    // 0x344f48: 0x92050044  lbu         $a1, 0x44($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB38u, 0x344F44u, 0x344F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344F4Cu;
label_344f4c:
    // 0x344f4c: 0x54510007  bnel        $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x344F4Cu;
    {
        const bool branch_taken_0x344f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x344f4c) {
            ctx->pc = 0x344F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344F4Cu;
            // 0x344f50: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344F6Cu;
            goto label_344f6c;
        }
    }
    ctx->pc = 0x344F54u;
    // 0x344f54: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x344f54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x344f58: 0xc0432ee  jal         func_10CBB8
    ctx->pc = 0x344F58u;
    SET_GPR_U32(ctx, 31, 0x344F60u);
    ctx->pc = 0x344F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344F58u;
    // 0x344f5c: 0x92050044  lbu         $a1, 0x44($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CBB8u, 0x344F58u, 0x344F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344F60u;
label_344f60:
    // 0x344f60: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x344F60u;
    {
        const bool branch_taken_0x344f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x344f60) {
            ctx->pc = 0x344F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344F60u;
            // 0x344f64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344F74u;
            goto label_344f74;
        }
    }
    ctx->pc = 0x344F68u;
    // 0x344f68: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x344f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_344f6c:
    // 0x344f6c: 0xa2020047  sb          $v0, 0x47($s0)
    ctx->pc = 0x344f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x344f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_344f74:
    // 0x344f74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344f78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x344F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F7Cu;
        // 0x344f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344F84u;
    // 0x344f84: 0x0  nop
    ctx->pc = 0x344f84u;
    // NOP
label_344f88:
    // 0x344f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344f94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x344f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x344f98: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x344f98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x344f9c: 0xc0430e2  jal         func_10C388
    ctx->pc = 0x344F9Cu;
    SET_GPR_U32(ctx, 31, 0x344FA4u);
    ctx->pc = 0x344FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344F9Cu;
    // 0x344fa0: 0x92050044  lbu         $a1, 0x44($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C388u, 0x344F9Cu, 0x344FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344FA4u;
label_344fa4:
    // 0x344fa4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x344fa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x344fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344fac: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x344FACu;
    {
        const bool branch_taken_0x344fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x344FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FACu;
        // 0x344fb0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344fac) {
            ctx->pc = 0x344FC0u;
            goto label_344fc0;
        }
    }
    ctx->pc = 0x344FB4u;
    // 0x344fb4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x344FB4u;
    {
        const bool branch_taken_0x344fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344fb4) {
            ctx->pc = 0x344FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344FB4u;
            // 0x344fb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344FC8u;
            goto label_344fc8;
        }
    }
    ctx->pc = 0x344FBCu;
    // 0x344fbc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x344fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_344fc0:
    // 0x344fc0: 0xa2020047  sb          $v0, 0x47($s0)
    ctx->pc = 0x344fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x344fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_344fc8:
    // 0x344fc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x344FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FCCu;
        // 0x344fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344FD4u;
    // 0x344fd4: 0x0  nop
    ctx->pc = 0x344fd4u;
    // NOP
label_344fd8:
    // 0x344fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344fdc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x344fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x344fe0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x344fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x344fe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344fe8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x344fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x344fec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x344fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344ff0: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x344ff0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x344ff4: 0xc043106  jal         func_10C418
    ctx->pc = 0x344FF4u;
    SET_GPR_U32(ctx, 31, 0x344FFCu);
    ctx->pc = 0x344FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344FF4u;
    // 0x344ff8: 0x92050044  lbu         $a1, 0x44($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C418u, 0x344FF4u, 0x344FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344FFCu;
label_344ffc:
    // 0x344ffc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x344FFCu;
    {
        const bool branch_taken_0x344ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x344ffc) {
            ctx->pc = 0x345000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344FFCu;
            // 0x345000: 0xa200003c  sb          $zero, 0x3C($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345018u;
            goto label_345018;
        }
    }
    ctx->pc = 0x345004u;
    // 0x345004: 0xc0d143c  jal         func_3450F0
    ctx->pc = 0x345004u;
    SET_GPR_U32(ctx, 31, 0x34500Cu);
    ctx->pc = 0x345008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345004u;
    // 0x345008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3450F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3450F0u, 0x345004u, 0x34500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34500Cu;
label_34500c:
    // 0x34500c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x34500Cu;
    {
        const bool branch_taken_0x34500c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34500Cu;
        // 0x345010: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34500c) {
            ctx->pc = 0x345084u;
            goto label_345084;
        }
    }
    ctx->pc = 0x345014u;
    // 0x345014: 0x0  nop
    ctx->pc = 0x345014u;
    // NOP
label_345018:
    // 0x345018: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x345018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34501c: 0xa200003d  sb          $zero, 0x3D($s0)
    ctx->pc = 0x34501cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 0));
    // 0x345020: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x345020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x345024: 0xa200003e  sb          $zero, 0x3E($s0)
    ctx->pc = 0x345024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 62), (uint8_t)GPR_U32(ctx, 0));
    // 0x345028: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x345028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x34502c: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x34502cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x345030: 0xa2000041  sb          $zero, 0x41($s0)
    ctx->pc = 0x345030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x345034: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x345034u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x345038: 0xa3a40001  sb          $a0, 0x1($sp)
    ctx->pc = 0x345038u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34503c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_345040:
    // 0x345040: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x345040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x345044: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x345044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x345048: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x345048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x34504c: 0x0  nop
    ctx->pc = 0x34504cu;
    // NOP
    // 0x345050: 0x0  nop
    ctx->pc = 0x345050u;
    // NOP
    // 0x345054: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x345054u;
    {
        const bool branch_taken_0x345054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345054u;
        // 0x345058: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345054) {
            ctx->pc = 0x345040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345040;
        }
    }
    ctx->pc = 0x34505Cu;
    // 0x34505c: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x34505cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x345060: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x345060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345064: 0xc043240  jal         func_10C900
    ctx->pc = 0x345064u;
    SET_GPR_U32(ctx, 31, 0x34506Cu);
    ctx->pc = 0x345068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345064u;
    // 0x345068: 0x92050044  lbu         $a1, 0x44($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C900u, 0x345064u, 0x34506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34506Cu;
label_34506c:
    // 0x34506c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345070: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x345070u;
    {
        const bool branch_taken_0x345070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x345070) {
            ctx->pc = 0x345074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345070u;
            // 0x345074: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345084u;
            goto label_345084;
        }
    }
    ctx->pc = 0x345078u;
    // 0x345078: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x345078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34507c: 0xa2020047  sb          $v0, 0x47($s0)
    ctx->pc = 0x34507cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x345080: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x345080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_345084:
    // 0x345084: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x345084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345088: 0x3e00008  jr          $ra
    ctx->pc = 0x345088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345088u;
        // 0x34508c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345090u;
}
