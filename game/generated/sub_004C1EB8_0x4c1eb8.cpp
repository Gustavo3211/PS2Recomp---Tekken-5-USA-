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

// Function: sub_004C1EB8
// Address: 0x4c1eb8 - 0x4c2540
void sub_004C1EB8_0x4c1eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C1EB8_0x4c1eb8");
#endif

    switch (ctx->pc) {
        case 0x4c1ed4u: goto label_4c1ed4;
        case 0x4c1ef0u: goto label_4c1ef0;
        case 0x4c2038u: goto label_4c2038;
        case 0x4c20a0u: goto label_4c20a0;
        case 0x4c22dcu: goto label_4c22dc;
        case 0x4c22ecu: goto label_4c22ec;
        case 0x4c23d8u: goto label_4c23d8;
        case 0x4c23e0u: goto label_4c23e0;
        case 0x4c250cu: goto label_4c250c;
        default: break;
    }

    ctx->pc = 0x4c1eb8u;

    // 0x4c1eb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c1eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c1ebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c1ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c1ec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c1ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1ec4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c1ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c1ec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c1ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c1ecc: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4C1ECCu;
    SET_GPR_U32(ctx, 31, 0x4C1ED4u);
    ctx->pc = 0x4C1ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1ECCu;
    // 0x4c1ed0: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4C1ECCu, 0x4C1ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1ED4u;
label_4c1ed4:
    // 0x4c1ed4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c1ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c1ed8: 0xac620eb4  sw          $v0, 0xEB4($v1)
    ctx->pc = 0x4c1ed8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0EB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0EB4u, _value); } while (0);
    // 0x4c1edc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c1edcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c1ee0: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C1EE0u;
    {
        const bool branch_taken_0x4c1ee0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C1EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1EE0u;
        // 0x4c1ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1ee0) {
            ctx->pc = 0x4C1F24u;
            goto label_4c1f24;
        }
    }
    ctx->pc = 0x4C1EE8u;
    // 0x4c1ee8: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C1EE8u;
    SET_GPR_U32(ctx, 31, 0x4C1EF0u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C1EE8u, 0x4C1EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1EF0u;
label_4c1ef0:
    // 0x4c1ef0: 0x240201e0  addiu       $v0, $zero, 0x1E0
    ctx->pc = 0x4c1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x4c1ef4: 0x24030432  addiu       $v1, $zero, 0x432
    ctx->pc = 0x4c1ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1074));
    // 0x4c1ef8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c1ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c1efc: 0xa602015e  sh          $v0, 0x15E($s0)
    ctx->pc = 0x4c1efcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1f00: 0x260401b6  addiu       $a0, $s0, 0x1B6
    ctx->pc = 0x4c1f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 438));
    // 0x4c1f04: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x4c1f04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c1f08: 0xa605002e  sh          $a1, 0x2E($s0)
    ctx->pc = 0x4c1f08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 5));
    // 0x4c1f0c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c1f0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c1f10: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4c1f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4c1f14: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4c1f14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1f18: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4c1f18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c1f1c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4c1f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x4c1f20: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x4c1f20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_4c1f24:
    // 0x4c1f24: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4c1f24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x4c1f28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C1F28u;
    {
        const bool branch_taken_0x4c1f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1F28u;
        // 0x4c1f2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1f28) {
            ctx->pc = 0x4C1F48u;
            goto label_4c1f48;
        }
    }
    ctx->pc = 0x4C1F30u;
    // 0x4c1f30: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4C1F30u;
    {
        const bool branch_taken_0x4c1f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1F30u;
        // 0x4c1f34: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1f30) {
            ctx->pc = 0x4C1F60u;
            goto label_4c1f60;
        }
    }
    ctx->pc = 0x4C1F38u;
    // 0x4c1f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c1f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1f3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c1f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c1f40: 0x3e00008  jr          $ra
    ctx->pc = 0x4C1F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1F40u;
        // 0x4c1f44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C1F48u;
label_4c1f48:
    // 0x4c1f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c1f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c1f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1f50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c1f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c1f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c1f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c1f58: 0x81307de  j           func_4C1F78
    ctx->pc = 0x4C1F58u;
    ctx->pc = 0x4C1F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1F58u;
    // 0x4c1f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1F78u;
    goto label_4c1f78;
    ctx->pc = 0x4C1F60u;
label_4c1f60:
    // 0x4c1f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c1f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c1f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c1f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c1f6c: 0x81308e6  j           func_4C2398
    ctx->pc = 0x4C1F6Cu;
    ctx->pc = 0x4C1F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1F6Cu;
    // 0x4c1f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C2398u;
    goto label_4c2398;
    ctx->pc = 0x4C1F74u;
    // 0x4c1f74: 0x0  nop
    ctx->pc = 0x4c1f74u;
    // NOP
label_4c1f78:
    // 0x4c1f78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c1f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c1f7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c1f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c1f80: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4c1f80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4c1f84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c1f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c1f88: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4c1f88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4c1f8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c1f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c1f90: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4c1f90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4c1f94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c1f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c1f98: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4c1f98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4c1f9c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c1f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c1fa0: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4c1fa0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4c1fa4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c1fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c1fa8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4c1fa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1fac: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c1facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4c1fb0: 0x26100e98  addiu       $s0, $s0, 0xE98
    ctx->pc = 0x4c1fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3736));
    // 0x4c1fb4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4c1fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4c1fb8: 0x26be015a  addiu       $fp, $s5, 0x15A
    ctx->pc = 0x4c1fb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 346));
    // 0x4c1fbc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4c1fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4c1fc0: 0x26520ea4  addiu       $s2, $s2, 0xEA4
    ctx->pc = 0x4c1fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3748));
    // 0x4c1fc4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c1fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c1fc8: 0x26730ea8  addiu       $s3, $s3, 0xEA8
    ctx->pc = 0x4c1fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3752));
    // 0x4c1fcc: 0x26940eac  addiu       $s4, $s4, 0xEAC
    ctx->pc = 0x4c1fccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3756));
    // 0x4c1fd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c1fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E98u));
    // 0x4c1fd4: 0x86a201be  lh          $v0, 0x1BE($s5)
    ctx->pc = 0x4c1fd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 446)));
    // 0x4c1fd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1fdc: 0x8eb60140  lw          $s6, 0x140($s5)
    ctx->pc = 0x4c1fdcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x4c1fe0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1fe4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c1fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c1fe8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c1fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c1fec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1ff0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c1ff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1ff4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c1ff8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1ffc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c1ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c2000: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c2000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c2004: 0x96c20118  lhu         $v0, 0x118($s6)
    ctx->pc = 0x4c2004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 280)));
    // 0x4c2008: 0xa6a20118  sh          $v0, 0x118($s5)
    ctx->pc = 0x4c2008u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c200c: 0x96c3011c  lhu         $v1, 0x11C($s6)
    ctx->pc = 0x4c200cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 284)));
    // 0x4c2010: 0xa6a3011c  sh          $v1, 0x11C($s5)
    ctx->pc = 0x4c2010u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c2014: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c2014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2018: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c2018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c201c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c201cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c2020: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c2020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c2024: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4c2024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4c2028: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c2028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c202c: 0x946370f8  lhu         $v1, 0x70F8($v1)
    ctx->pc = 0x4c202cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28920)));
    // 0x4c2030: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C2030u;
    SET_GPR_U32(ctx, 31, 0x4C2038u);
    ctx->pc = 0x4C2034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2030u;
    // 0x4c2034: 0xa6a30120  sh          $v1, 0x120($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 288), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C2030u, 0x4C2038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2038u;
label_4c2038:
    // 0x4c2038: 0x8e4c0000  lw          $t4, 0x0($s2)
    ctx->pc = 0x4c2038u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c203c: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x4c203cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c2040: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c2040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c2044: 0x8e8b0000  lw          $t3, 0x0($s4)
    ctx->pc = 0x4c2044u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c2048: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c2048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c204c: 0x34632800  ori         $v1, $v1, 0x2800
    ctx->pc = 0x4c204cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10240);
    // 0x4c2050: 0x34423200  ori         $v0, $v0, 0x3200
    ctx->pc = 0x4c2050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12800);
    // 0x4c2054: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x4c2054u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x4c2058: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x4c2058u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x4c205c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4c205cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4c2060: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x4c2060u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x4c2064: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x4c2064u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4c2068: 0x1916024  and         $t4, $t4, $s1
    ctx->pc = 0x4c2068u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 17));
    // 0x4c206c: 0xae4c0000  sw          $t4, 0x0($s2)
    ctx->pc = 0x4c206cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 12));
    // 0x4c2070: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c2070u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c2074: 0xae6d0000  sw          $t5, 0x0($s3)
    ctx->pc = 0x4c2074u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 13));
    // 0x4c2078: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c2078u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c207c: 0xae8b0000  sw          $t3, 0x0($s4)
    ctx->pc = 0x4c207cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 11));
    // 0x4c2080: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c2080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2084: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4c2084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2088: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4c2088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c208c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4c208cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2090: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x4c2090u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2094: 0x24c60e9c  addiu       $a2, $a2, 0xE9C
    ctx->pc = 0x4c2094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3740));
    // 0x4c2098: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4C2098u;
    SET_GPR_U32(ctx, 31, 0x4C20A0u);
    ctx->pc = 0x4C209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2098u;
    // 0x4c209c: 0x24e70ea0  addiu       $a3, $a3, 0xEA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4C2098u, 0x4C20A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C20A0u;
label_4c20a0:
    // 0x4c20a0: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4c20a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c20a4: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4c20a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c20a8: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4c20a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4c20ac: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4c20acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c20b0: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4c20b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4c20b4: 0x24b8249c  addiu       $t8, $a1, 0x249C
    ctx->pc = 0x4c20b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 9372));
    // 0x4c20b8: 0x24b72494  addiu       $s7, $a1, 0x2494
    ctx->pc = 0x4c20b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 9364));
    // 0x4c20bc: 0x284f0000  slti        $t7, $v0, 0x0
    ctx->pc = 0x4c20bcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4c20c0: 0x248700ff  addiu       $a3, $a0, 0xFF
    ctx->pc = 0x4c20c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x4c20c4: 0x24a52498  addiu       $a1, $a1, 0x2498
    ctx->pc = 0x4c20c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9368));
    // 0x4c20c8: 0x28860000  slti        $a2, $a0, 0x0
    ctx->pc = 0x4c20c8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4c20cc: 0x246c00ff  addiu       $t4, $v1, 0xFF
    ctx->pc = 0x4c20ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x4c20d0: 0x28680000  slti        $t0, $v1, 0x0
    ctx->pc = 0x4c20d0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4c20d4: 0x245000ff  addiu       $s0, $v0, 0xFF
    ctx->pc = 0x4c20d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x4c20d8: 0x8f0b0000  lw          $t3, 0x0($t8)
    ctx->pc = 0x4c20d8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4c20dc: 0x8ee90000  lw          $t1, 0x0($s7)
    ctx->pc = 0x4c20dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c20e0: 0x47400  sll         $t6, $a0, 16
    ctx->pc = 0x4c20e0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4c20e4: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x4c20e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c20e8: 0x36c00  sll         $t5, $v1, 16
    ctx->pc = 0x4c20e8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c20ec: 0xe6200b  movn        $a0, $a3, $a2
    ctx->pc = 0x4c20ecu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x4c20f0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4c20f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c20f4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4c20f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c20f8: 0x188180b  movn        $v1, $t4, $t0
    ctx->pc = 0x4c20f8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 12));
    // 0x4c20fc: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4c20fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c2100: 0x26400  sll         $t4, $v0, 16
    ctx->pc = 0x4c2100u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c2104: 0x20f100b  movn        $v0, $s0, $t7
    ctx->pc = 0x4c2104u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x4c2108: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x4c2108u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x4c210c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x4c210cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x4c2110: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4c2110u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4c2114: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x4c2114u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x4c2118: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4c2118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4c211c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4c211cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4c2120: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c2120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c2124: 0x1314825  or          $t1, $t1, $s1
    ctx->pc = 0x4c2124u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 17));
    // 0x4c2128: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x4c2128u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
    // 0x4c212c: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x4c212cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x4c2130: 0x1715825  or          $t3, $t3, $s1
    ctx->pc = 0x4c2130u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 17));
    // 0x4c2134: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x4c2134u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x4c2138: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c2138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c213c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c213cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c2140: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c2140u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c2144: 0x12e4824  and         $t1, $t1, $t6
    ctx->pc = 0x4c2144u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
    // 0x4c2148: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x4c2148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4c214c: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4c214cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4c2150: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c2150u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c2154: 0x14d5024  and         $t2, $t2, $t5
    ctx->pc = 0x4c2154u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 13));
    // 0x4c2158: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4c2158u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4c215c: 0x16c5824  and         $t3, $t3, $t4
    ctx->pc = 0x4c215cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x4c2160: 0x26ac0018  addiu       $t4, $s5, 0x18
    ctx->pc = 0x4c2160u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x4c2164: 0xaee90000  sw          $t1, 0x0($s7)
    ctx->pc = 0x4c2164u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 9));
    // 0x4c2168: 0x34c9ffff  ori         $t1, $a2, 0xFFFF
    ctx->pc = 0x4c2168u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c216c: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x4c216cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x4c2170: 0x350affff  ori         $t2, $t0, 0xFFFF
    ctx->pc = 0x4c2170u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c2174: 0xaf0b0000  sw          $t3, 0x0($t8)
    ctx->pc = 0x4c2174u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 11));
    // 0x4c2178: 0x34ebffff  ori         $t3, $a3, 0xFFFF
    ctx->pc = 0x4c2178u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c217c: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4c217cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4c2180: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x4c2180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x4c2184: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4c2184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4c2188: 0x26a80014  addiu       $t0, $s5, 0x14
    ctx->pc = 0x4c2188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x4c218c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4c218cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4c2190: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x4c2190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x4c2194: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4c2194u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c2198: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c2198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c219c: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x4c219cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c21a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c21a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c21a4: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4c21a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c21a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c21a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c21ac: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4c21acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4c21b0: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4c21b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4c21b4: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4c21b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x4c21b8: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x4c21b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x4c21bc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4c21bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c21c0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c21c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c21c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c21c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c21c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c21c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c21cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4c21ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c21d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c21d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c21d4: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4c21d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4c21d8: 0x1445024  and         $t2, $t2, $a0
    ctx->pc = 0x4c21d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x4c21dc: 0xae6a0000  sw          $t2, 0x0($s3)
    ctx->pc = 0x4c21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 10));
    // 0x4c21e0: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x4c21e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x4c21e4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c21e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c21e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c21e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c21ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4c21ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4c21f0: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4c21f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4c21f4: 0x1655824  and         $t3, $t3, $a1
    ctx->pc = 0x4c21f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x4c21f8: 0xae8b0000  sw          $t3, 0x0($s4)
    ctx->pc = 0x4c21f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 11));
    // 0x4c21fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4c21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c2200: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c2200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c2204: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c2204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c2208: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c2208u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4c220c: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4c220cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c2210: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4c2210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c2214: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c2214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c2218: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c2218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c221c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c221cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c2220: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c2220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c2224: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4c2224u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4c2228: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4c2228u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c222c: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4c222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c2230: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c2230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c2234: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c2234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c2238: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c223c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c223cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c2240: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4c2240u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4c2244: 0x8da70eb4  lw          $a3, 0xEB4($t5)
    ctx->pc = 0x4c2244u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 3764)));
    // 0x4c2248: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4c2248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c224c: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x4c224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x4c2250: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c2250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c2254: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c2254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c2258: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c2258u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c225c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c225cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c2260: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4c2260u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c2264: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4c2264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4c2268: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4c2268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4c226c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c226cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c2270: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x4c2270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x4c2274: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4c2274u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c2278: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c2278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c227c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4c227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c2280: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c2280u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c2284: 0x96480000  lhu         $t0, 0x0($s2)
    ctx->pc = 0x4c2284u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c2288: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4c2288u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c228c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c228cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c2290: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4c2290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4c2294: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x4c2294u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c2298: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4c2298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4c229c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4c229cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c22a0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4c22a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4c22a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c22a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c22a8: 0x8ce20058  lw          $v0, 0x58($a3)
    ctx->pc = 0x4c22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x4c22ac: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c22acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c22b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c22b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c22b4: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4c22b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4c22b8: 0xd13025  or          $a2, $a2, $s1
    ctx->pc = 0x4c22b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    // 0x4c22bc: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4c22bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4c22c0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4c22c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4c22c4: 0xa6a80130  sh          $t0, 0x130($s5)
    ctx->pc = 0x4c22c4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 304), (uint16_t)GPR_U32(ctx, 8));
    // 0x4c22c8: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4c22c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c22cc: 0xa6a20132  sh          $v0, 0x132($s5)
    ctx->pc = 0x4c22ccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c22d0: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4c22d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c22d4: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4C22D4u;
    SET_GPR_U32(ctx, 31, 0x4C22DCu);
    ctx->pc = 0x4C22D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C22D4u;
    // 0x4c22d8: 0xa6a30134  sh          $v1, 0x134($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 308), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4C22D4u, 0x4C22DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C22DCu;
label_4c22dc:
    // 0x4c22dc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x4c22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4c22e0: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x4c22e0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c22e4: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4C22E4u;
    SET_GPR_U32(ctx, 31, 0x4C22ECu);
    ctx->pc = 0x4C22E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C22E4u;
    // 0x4c22e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4C22E4u, 0x4C22ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C22ECu;
label_4c22ec:
    // 0x4c22ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4c22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c22f0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4c22f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c22f4: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x4c22f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4c22f8: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x4c22f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4c22fc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4c22fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c2300: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c2300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c2304: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x4c2304u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x4c2308: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4c2308u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4c230c: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x4c230cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4c2310: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4c2310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4c2314: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4c2314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4c2318: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4c2318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4c231c: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x4c231cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x4c2320: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4c2320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c2324: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x4c2324u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x4c2328: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x4c2328u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x4c232c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4c232cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4c2330: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4c2330u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4c2334: 0x24061800  addiu       $a2, $zero, 0x1800
    ctx->pc = 0x4c2334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x4c2338: 0xa6a2011a  sh          $v0, 0x11A($s5)
    ctx->pc = 0x4c2338u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 282), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c233c: 0x26a401bc  addiu       $a0, $s5, 0x1BC
    ctx->pc = 0x4c233cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 444));
    // 0x4c2340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c2340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2344: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4c2344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c2348: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c2348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c234c: 0xa6a2011e  sh          $v0, 0x11E($s5)
    ctx->pc = 0x4c234cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2350: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c2350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2354: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4c2354u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c2358: 0xa6a7015c  sh          $a3, 0x15C($s5)
    ctx->pc = 0x4c2358u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 348), (uint16_t)GPR_U32(ctx, 7));
    // 0x4c235c: 0xa6a30122  sh          $v1, 0x122($s5)
    ctx->pc = 0x4c235cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c2360: 0xa7c60000  sh          $a2, 0x0($fp)
    ctx->pc = 0x4c2360u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4c2364: 0xa6a50158  sh          $a1, 0x158($s5)
    ctx->pc = 0x4c2364u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 344), (uint16_t)GPR_U32(ctx, 5));
    // 0x4c2368: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c2368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c236c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c236cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c2370: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c2370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c2374: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c2374u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c2378: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c2378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c237c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c237cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c2380: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c2380u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c2384: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4c2384u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c2388: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4c2388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c238c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4c238cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2390: 0x3e00008  jr          $ra
    ctx->pc = 0x4C2390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2390u;
        // 0x4c2394: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C2390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C2398u;
label_4c2398:
    // 0x4c2398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c2398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c239c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c239cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c23a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c23a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c23a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c23a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c23a8: 0x2602015e  addiu       $v0, $s0, 0x15E
    ctx->pc = 0x4c23a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4c23ac: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4c23acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c23b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c23b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4c23b4: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4c23b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c23b8: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C23B8u;
    {
        const bool branch_taken_0x4c23b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C23B8u;
        // 0x4c23bc: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c23b8) {
            ctx->pc = 0x4C23D0u;
            goto label_4c23d0;
        }
    }
    ctx->pc = 0x4C23C0u;
    // 0x4c23c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c23c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c23c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c23c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c23c8: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4C23C8u;
    ctx->pc = 0x4C23CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C23C8u;
    // 0x4c23cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4C23D0u;
label_4c23d0:
    // 0x4c23d0: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4C23D0u;
    SET_GPR_U32(ctx, 31, 0x4C23D8u);
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4C23D0u, 0x4C23D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C23D8u;
label_4c23d8:
    // 0x4c23d8: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4C23D8u;
    SET_GPR_U32(ctx, 31, 0x4C23E0u);
    ctx->pc = 0x4C23DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C23D8u;
    // 0x4c23dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4C23D8u, 0x4C23E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C23E0u;
label_4c23e0:
    // 0x4c23e0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c23e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c23e4: 0x24a50e98  addiu       $a1, $a1, 0xE98
    ctx->pc = 0x4c23e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3736));
    // 0x4c23e8: 0x8602015a  lh          $v0, 0x15A($s0)
    ctx->pc = 0x4c23e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 346)));
    // 0x4c23ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c23ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E98u));
    // 0x4c23f0: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x4c23f0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x4c23f4: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x4c23f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x4c23f8: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4c23f8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4c23fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c23fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c2400: 0x25ad0ea4  addiu       $t5, $t5, 0xEA4
    ctx->pc = 0x4c2400u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3748));
    // 0x4c2404: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c2404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c2408: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x4c2408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c240c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c240cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c2410: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c2414: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4c2414u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4c2418: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4c2418u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4c241c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c241cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c2420: 0x25290ea8  addiu       $t1, $t1, 0xEA8
    ctx->pc = 0x4c2420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3752));
    // 0x4c2424: 0x25080eac  addiu       $t0, $t0, 0xEAC
    ctx->pc = 0x4c2424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3756));
    // 0x4c2428: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4c2428u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0EA8u));
    // 0x4c242c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c242cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c2430: 0x8d0a0000  lw          $t2, 0x0($t0)
    ctx->pc = 0x4c2430u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c2434: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c2434u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c2438: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c2438u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c243c: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x4c243cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x4c2440: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c2440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c2444: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c2444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c2448: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4c2448u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4c244c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c244cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c2450: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c2454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c2454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2458: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c2458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c245c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4c245cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4c2460: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x4c2460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x4c2464: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c2464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c2468: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c2468u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c246c: 0x8602011a  lh          $v0, 0x11A($s0)
    ctx->pc = 0x4c246cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 282)));
    // 0x4c2470: 0x84ab0000  lh          $t3, 0x0($a1)
    ctx->pc = 0x4c2470u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c2474: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x4c2474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x4c2478: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c2478u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c247c: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4c247cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x4c2480: 0x8602011e  lh          $v0, 0x11E($s0)
    ctx->pc = 0x4c2480u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 286)));
    // 0x4c2484: 0x85a50000  lh          $a1, 0x0($t5)
    ctx->pc = 0x4c2484u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c2488: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x4c2488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x4c248c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c248cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c2490: 0xab2818  mult        $a1, $a1, $t3
    ctx->pc = 0x4c2490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4c2494: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4c2494u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4c2498: 0x86020122  lh          $v0, 0x122($s0)
    ctx->pc = 0x4c2498u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 290)));
    // 0x4c249c: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4c249cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c24a0: 0x24a7003f  addiu       $a3, $a1, 0x3F
    ctx->pc = 0x4c24a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x4c24a4: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x4c24a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x4c24a8: 0x28a60000  slti        $a2, $a1, 0x0
    ctx->pc = 0x4c24a8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4c24ac: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4c24acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4c24b0: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x4c24b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4c24b4: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x4c24b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x4c24b8: 0xe6280b  movn        $a1, $a3, $a2
    ctx->pc = 0x4c24b8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x4c24bc: 0x52983  sra         $a1, $a1, 6
    ctx->pc = 0x4c24bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 6));
    // 0x4c24c0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4c24c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c24c4: 0x2467003f  addiu       $a3, $v1, 0x3F
    ctx->pc = 0x4c24c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x4c24c8: 0x28660000  slti        $a2, $v1, 0x0
    ctx->pc = 0x4c24c8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4c24cc: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x4c24ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4c24d0: 0xe6180b  movn        $v1, $a3, $a2
    ctx->pc = 0x4c24d0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x4c24d4: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x4c24d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x4c24d8: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4c24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4c24dc: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4c24dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4c24e0: 0x2446003f  addiu       $a2, $v0, 0x3F
    ctx->pc = 0x4c24e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x4c24e4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4c24e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4c24e8: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x4c24e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x4c24ec: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x4c24ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x4c24f0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4c24f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4c24f4: 0xae050124  sw          $a1, 0x124($s0)
    ctx->pc = 0x4c24f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 5));
    // 0x4c24f8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4c24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c24fc: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x4c24fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x4c2500: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4c2500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c2504: 0xc12b9d0  jal         func_4AE740
    ctx->pc = 0x4C2504u;
    SET_GPR_U32(ctx, 31, 0x4C250Cu);
    ctx->pc = 0x4C2508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2504u;
    // 0x4c2508: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE740u, 0x4C2504u, 0x4C250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C250Cu;
label_4c250c:
    // 0x4c250c: 0x26050118  addiu       $a1, $s0, 0x118
    ctx->pc = 0x4c250cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x4c2510: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4c2510u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c2514: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x4c2514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x4c2518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c2518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c251c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c251cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2520: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x4c2520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x4c2524: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c2524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c2528: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4c2528u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c252c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c252cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c2530: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4c2530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4c2534: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4c2534u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2538: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4C2538u;
    ctx->pc = 0x4C253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2538u;
    // 0x4c253c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4C2540u;
}
