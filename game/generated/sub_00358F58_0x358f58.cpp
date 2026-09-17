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

// Function: sub_00358F58
// Address: 0x358f58 - 0x3590a0
void sub_00358F58_0x358f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358F58_0x358f58");
#endif

    switch (ctx->pc) {
        case 0x359070u: goto label_359070;
        default: break;
    }

    ctx->pc = 0x358f58u;

    // 0x358f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358f5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358f64: 0x80d8802  j           func_362008
    ctx->pc = 0x358F64u;
    ctx->pc = 0x358F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F64u;
    // 0x358f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362008u, 0x358F64u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358F6Cu;
    // 0x358f6c: 0x0  nop
    ctx->pc = 0x358f6cu;
    // NOP
    // 0x358f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358f74: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x358f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x358f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358f7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358f80: 0x80d7ade  j           func_35EB78
    ctx->pc = 0x358F80u;
    ctx->pc = 0x358F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F80u;
    // 0x358f84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EB78u;
    sub_0035EB78_0x35eb78(rdram, ctx, runtime); return;
    ctx->pc = 0x358F88u;
    // 0x358f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358f8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358f94: 0x80d7a62  j           func_35E988
    ctx->pc = 0x358F94u;
    ctx->pc = 0x358F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F94u;
    // 0x358f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E988u;
    sub_0035E988_0x35e988(rdram, ctx, runtime); return;
    ctx->pc = 0x358F9Cu;
    // 0x358f9c: 0x0  nop
    ctx->pc = 0x358f9cu;
    // NOP
    // 0x358fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358fac: 0x80d7ac2  j           func_35EB08
    ctx->pc = 0x358FACu;
    ctx->pc = 0x358FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358FACu;
    // 0x358fb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EB08u, 0x358FACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358FB4u;
    // 0x358fb4: 0x0  nop
    ctx->pc = 0x358fb4u;
    // NOP
    // 0x358fb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358fbc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x358fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x358fc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358fc8: 0x80d7b6a  j           func_35EDA8
    ctx->pc = 0x358FC8u;
    ctx->pc = 0x358FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358FC8u;
    // 0x358fcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EDA8u, 0x358FC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358FD0u;
    // 0x358fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358fdc: 0x80d7b34  j           func_35ECD0
    ctx->pc = 0x358FDCu;
    ctx->pc = 0x358FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358FDCu;
    // 0x358fe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35ECD0u;
    sub_0035ECD0_0x35ecd0(rdram, ctx, runtime); return;
    ctx->pc = 0x358FE4u;
    // 0x358fe4: 0x0  nop
    ctx->pc = 0x358fe4u;
    // NOP
    // 0x358fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358fec: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x358fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x358ff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358ff8: 0x80d7b9c  j           func_35EE70
    ctx->pc = 0x358FF8u;
    ctx->pc = 0x358FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358FF8u;
    // 0x358ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EE70u, 0x358FF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359000u;
    // 0x359000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359004: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x359004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x359008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35900c: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x35900cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x359010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359014: 0x80d776c  j           func_35DDB0
    ctx->pc = 0x359014u;
    ctx->pc = 0x359018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359014u;
    // 0x359018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DDB0u, 0x359014u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35901Cu;
    // 0x35901c: 0x0  nop
    ctx->pc = 0x35901cu;
    // NOP
    // 0x359020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359024: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x359024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x359028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35902c: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x35902cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x359030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359034: 0x80d77aa  j           func_35DEA8
    ctx->pc = 0x359034u;
    ctx->pc = 0x359038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359034u;
    // 0x359038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DEA8u;
    sub_0035DEA8_0x35dea8(rdram, ctx, runtime); return;
    ctx->pc = 0x35903Cu;
    // 0x35903c: 0x0  nop
    ctx->pc = 0x35903cu;
    // NOP
    // 0x359040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35904c: 0x80d77d0  j           func_35DF40
    ctx->pc = 0x35904Cu;
    ctx->pc = 0x359050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35904Cu;
    // 0x359050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DF40u, 0x35904Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359054u;
    // 0x359054: 0x0  nop
    ctx->pc = 0x359054u;
    // NOP
    // 0x359058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35905c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35905cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359064: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x359064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x359068: 0xc0d91fe  jal         func_3647F8
    ctx->pc = 0x359068u;
    SET_GPR_U32(ctx, 31, 0x359070u);
    ctx->pc = 0x35906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359068u;
    // 0x35906c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3647F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3647F8u, 0x359068u, 0x359070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359070u;
label_359070:
    // 0x359070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359074: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x359074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35907c: 0x80d8a10  j           func_362840
    ctx->pc = 0x35907Cu;
    ctx->pc = 0x359080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35907Cu;
    // 0x359080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362840u, 0x35907Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359084u;
    // 0x359084: 0x0  nop
    ctx->pc = 0x359084u;
    // NOP
    // 0x359088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35908c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35908cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359094: 0x80d6d6a  j           func_35B5A8
    ctx->pc = 0x359094u;
    ctx->pc = 0x359098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359094u;
    // 0x359098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B5A8u, 0x359094u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35909Cu;
    // 0x35909c: 0x0  nop
    ctx->pc = 0x35909cu;
    // NOP
    ctx->pc = 0x3590a0u;
}
