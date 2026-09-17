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

// Function: sub_00504E88
// Address: 0x504e88 - 0x504f68
void sub_00504E88_0x504e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504E88_0x504e88");
#endif

    switch (ctx->pc) {
        case 0x504eb0u: goto label_504eb0;
        case 0x504ec8u: goto label_504ec8;
        case 0x504f20u: goto label_504f20;
        case 0x504f38u: goto label_504f38;
        default: break;
    }

    ctx->pc = 0x504e88u;

    // 0x504e88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x504e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x504e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x504e90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x504e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x504e94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x504e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504e98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x504e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x504e9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x504e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504ea0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x504ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x504ea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x504ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504ea8: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x504EA8u;
    SET_GPR_U32(ctx, 31, 0x504EB0u);
    ctx->pc = 0x504EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504EA8u;
    // 0x504eac: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x504EA8u, 0x504EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504EB0u;
label_504eb0:
    // 0x504eb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x504eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504eb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504ebc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504ec0: 0xc14138a  jal         func_504E28
    ctx->pc = 0x504EC0u;
    SET_GPR_U32(ctx, 31, 0x504EC8u);
    ctx->pc = 0x504EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504EC0u;
    // 0x504ec4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504E28u, 0x504EC0u, 0x504EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504EC8u;
label_504ec8:
    // 0x504ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504ecc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504ed0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x504ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x504ed4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504ed8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x504ed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504edc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x504edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504ee0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x504ee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504ee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x504ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504ee8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x504ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504eec: 0x8141372  j           func_504DC8
    ctx->pc = 0x504EECu;
    ctx->pc = 0x504EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504EECu;
    // 0x504ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504DC8u;
    sub_00504DC8_0x504dc8(rdram, ctx, runtime); return;
    ctx->pc = 0x504EF4u;
    // 0x504ef4: 0x0  nop
    ctx->pc = 0x504ef4u;
    // NOP
    // 0x504ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x504efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x504efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x504f00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x504f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x504f04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x504f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504f08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x504f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x504f0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x504f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504f10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x504f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x504f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x504f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504f18: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x504F18u;
    SET_GPR_U32(ctx, 31, 0x504F20u);
    ctx->pc = 0x504F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504F18u;
    // 0x504f1c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x504F18u, 0x504F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504F20u;
label_504f20:
    // 0x504f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x504f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504f24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504f2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504f30: 0xc141372  jal         func_504DC8
    ctx->pc = 0x504F30u;
    SET_GPR_U32(ctx, 31, 0x504F38u);
    ctx->pc = 0x504F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504F30u;
    // 0x504f34: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504DC8u, 0x504F30u, 0x504F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504F38u;
label_504f38:
    // 0x504f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504f3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504f40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x504f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x504f44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504f48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x504f48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504f4c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x504f4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504f50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x504f50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504f54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x504f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504f58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x504f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504f5c: 0x814138a  j           func_504E28
    ctx->pc = 0x504F5Cu;
    ctx->pc = 0x504F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504F5Cu;
    // 0x504f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504E28u;
    sub_00504E28_0x504e28(rdram, ctx, runtime); return;
    ctx->pc = 0x504F64u;
    // 0x504f64: 0x0  nop
    ctx->pc = 0x504f64u;
    // NOP
    ctx->pc = 0x504f68u;
}
