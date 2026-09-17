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

// Function: sub_002A1F90
// Address: 0x2a1f90 - 0x2a20b8
void sub_002A1F90_0x2a1f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1F90_0x2a1f90");
#endif

    switch (ctx->pc) {
        case 0x2a1fd8u: goto label_2a1fd8;
        case 0x2a2018u: goto label_2a2018;
        case 0x2a2090u: goto label_2a2090;
        default: break;
    }

    ctx->pc = 0x2a1f90u;

    // 0x2a1f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a1f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a1f94: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2a1f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2a1f98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1f9c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a1f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a1fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a1fa4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a1fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a1fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a1fac: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2a1facu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a1fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a1fb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a1fb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fb8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a1fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a1fbc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2a1fbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fc0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2a1fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2a1fc4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2a1fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a1fc8: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A1FC8u;
    {
        const bool branch_taken_0x2a1fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A1FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FC8u;
        // 0x2a1fcc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1fc8) {
            ctx->pc = 0x2A2010u;
            goto label_2a2010;
        }
    }
    ctx->pc = 0x2A1FD0u;
    // 0x2a1fd0: 0xc086304  jal         func_218C10
    ctx->pc = 0x2A1FD0u;
    SET_GPR_U32(ctx, 31, 0x2A1FD8u);
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x2A1FD0u, 0x2A1FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FD8u;
label_2a1fd8:
    // 0x2a1fd8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A1FD8u;
    {
        const bool branch_taken_0x2a1fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FD8u;
        // 0x2a1fdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1fd8) {
            ctx->pc = 0x2A2010u;
            goto label_2a2010;
        }
    }
    ctx->pc = 0x2A1FE0u;
    // 0x2a1fe0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fe4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a1fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a1fe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a1fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a1fec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a1fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1ff4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a1ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ff8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a1ff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1ffc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a1ffcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2000: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2a2000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a2004: 0x80a87ca  j           func_2A1F28
    ctx->pc = 0x2A2004u;
    ctx->pc = 0x2A2008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2004u;
    // 0x2a2008: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1F28u;
    sub_002A1F28_0x2a1f28(rdram, ctx, runtime); return;
    ctx->pc = 0x2A200Cu;
    // 0x2a200c: 0x0  nop
    ctx->pc = 0x2a200cu;
    // NOP
label_2a2010:
    // 0x2a2010: 0xc086304  jal         func_218C10
    ctx->pc = 0x2A2010u;
    SET_GPR_U32(ctx, 31, 0x2A2018u);
    ctx->pc = 0x2A2014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2010u;
    // 0x2a2014: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x2A2010u, 0x2A2018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2018u;
label_2a2018:
    // 0x2a2018: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a2018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a201c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2a201cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2a2020: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a2020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2024: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2a2024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2a2028: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a2028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a202c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a202cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a2030: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a2030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2034: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A2034u;
    {
        const bool branch_taken_0x2a2034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2034u;
        // 0x2a2038: 0x714021  addu        $t0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2034) {
            ctx->pc = 0x2A2060u;
            goto label_2a2060;
        }
    }
    ctx->pc = 0x2A203Cu;
    // 0x2a203c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a203cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a2040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a2044: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a2044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2048: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a2048u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a204c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a204cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2050: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2a2050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a2054: 0x80a87ca  j           func_2A1F28
    ctx->pc = 0x2A2054u;
    ctx->pc = 0x2A2058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2054u;
    // 0x2a2058: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1F28u;
    sub_002A1F28_0x2a1f28(rdram, ctx, runtime); return;
    ctx->pc = 0x2A205Cu;
    // 0x2a205c: 0x0  nop
    ctx->pc = 0x2a205cu;
    // NOP
label_2a2060:
    // 0x2a2060: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2a2060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2a2064: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a2064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2068: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a2068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a206c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a206cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a2070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a2070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a2074: 0x8c42c9a8  lw          $v0, -0x3658($v0)
    ctx->pc = 0x2a2074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953384)));
    // 0x2a2078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a2078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a207c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2a207cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2a2080: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2a2080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a2084: 0x8ca5c920  lw          $a1, -0x36E0($a1)
    ctx->pc = 0x2a2084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953248)));
    // 0x2a2088: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A2088u;
    SET_GPR_U32(ctx, 31, 0x2A2090u);
    ctx->pc = 0x2A208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2088u;
    // 0x2a208c: 0x8d1000b8  lw          $s0, 0xB8($t0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A2088u, 0x2A2090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2090u;
label_2a2090:
    // 0x2a2090: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x2a2090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2a2094: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a2094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a2098: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x2a2098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x2a209c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a209cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a20a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a20a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a20a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a20a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a20a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a20a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a20ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2a20acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a20b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A20B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20B0u;
        // 0x2a20b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A20B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A20B8u;
}
