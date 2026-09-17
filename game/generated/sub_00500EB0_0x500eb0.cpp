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

// Function: sub_00500EB0
// Address: 0x500eb0 - 0x501200
void sub_00500EB0_0x500eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500EB0_0x500eb0");
#endif

    switch (ctx->pc) {
        case 0x500ed4u: goto label_500ed4;
        case 0x500f34u: goto label_500f34;
        case 0x500f44u: goto label_500f44;
        case 0x500fa4u: goto label_500fa4;
        case 0x500fd0u: goto label_500fd0;
        case 0x500ffcu: goto label_500ffc;
        case 0x501020u: goto label_501020;
        case 0x5011dcu: goto label_5011dc;
        case 0x5011e0u: goto label_5011e0;
        default: break;
    }

    ctx->pc = 0x500eb0u;

label_500eb0:
    // 0x500eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x500eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x500eb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x500eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x500eb8: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x500eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x500ebc: 0x2610a6a0  addiu       $s0, $s0, -0x5960
    ctx->pc = 0x500ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944416));
    // 0x500ec0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x500ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x500ec4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x500ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500ec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x500ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x500ecc: 0xc140338  jal         func_500CE0
    ctx->pc = 0x500ECCu;
    SET_GPR_U32(ctx, 31, 0x500ED4u);
    ctx->pc = 0x500ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500ECCu;
    // 0x500ed0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500CE0u, 0x500ECCu, 0x500ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x500ED4u;
label_500ed4:
    // 0x500ed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x500ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x500ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500edc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x500edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500ee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x500ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500ee4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x500ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x500ee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x500ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500eec: 0x2484a690  addiu       $a0, $a0, -0x5970
    ctx->pc = 0x500eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944400));
    // 0x500ef0: 0x813f8ea  j           func_4FE3A8
    ctx->pc = 0x500EF0u;
    ctx->pc = 0x500EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500EF0u;
    // 0x500ef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE3A8u;
    sub_004FE3A8_0x4fe3a8(rdram, ctx, runtime); return;
    ctx->pc = 0x500EF8u;
    // 0x500ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x500ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x500efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x500efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x500f00: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x500f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500f04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x500f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x500f08: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x500f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500f0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x500f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x500f10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x500f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500f14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x500f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x500f18: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x500f18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500f1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x500f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500f20: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x500f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500f24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x500f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x500f28: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x500f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x500f2c: 0xc1403ac  jal         func_500EB0
    ctx->pc = 0x500F2Cu;
    SET_GPR_U32(ctx, 31, 0x500F34u);
    ctx->pc = 0x500F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500F2Cu;
    // 0x500f30: 0x140982d  daddu       $s3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500EB0u;
    goto label_500eb0;
    ctx->pc = 0x500F34u;
label_500f34:
    // 0x500f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x500f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500f38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x500f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500f3c: 0xc1403ac  jal         func_500EB0
    ctx->pc = 0x500F3Cu;
    SET_GPR_U32(ctx, 31, 0x500F44u);
    ctx->pc = 0x500F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500F3Cu;
    // 0x500f40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500EB0u;
    goto label_500eb0;
    ctx->pc = 0x500F44u;
label_500f44:
    // 0x500f44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x500f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500f48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x500f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x500f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500f50: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x500f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500f54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x500f54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x500f58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x500f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500f5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x500f5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500f60: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x500f60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x500f64: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x500f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x500f68: 0x81403ac  j           func_500EB0
    ctx->pc = 0x500F68u;
    ctx->pc = 0x500F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500F68u;
    // 0x500f6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500EB0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_500eb0;
    ctx->pc = 0x500F70u;
    // 0x500f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x500f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x500f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x500f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x500f78: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x500f78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x500f7c: 0x2610a690  addiu       $s0, $s0, -0x5970
    ctx->pc = 0x500f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944400));
    // 0x500f80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x500f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x500f84: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x500f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500f88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x500f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500f8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x500f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x500f90: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x500f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500f94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x500f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x500f98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x500f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x500f9c: 0xc14020e  jal         func_500838
    ctx->pc = 0x500F9Cu;
    SET_GPR_U32(ctx, 31, 0x500FA4u);
    ctx->pc = 0x500FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500F9Cu;
    // 0x500fa0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500838u, 0x500F9Cu, 0x500FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x500FA4u;
label_500fa4:
    // 0x500fa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x500fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x500fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x500fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500fac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x500facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500fb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x500fb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x500fb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x500fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500fb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x500fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500fbc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x500fbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500fc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x500fc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x500fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500fc8: 0x8140238  j           func_5008E0
    ctx->pc = 0x500FC8u;
    ctx->pc = 0x500FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500FC8u;
    // 0x500fcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5008E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5008E0u, 0x500FC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x500FD0u;
label_500fd0:
    // 0x500fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x500fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x500fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x500fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x500fd8: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x500fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x500fdc: 0x2610a690  addiu       $s0, $s0, -0x5970
    ctx->pc = 0x500fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944400));
    // 0x500fe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x500fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x500fe4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x500fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x500fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500fec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x500fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x500ff0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x500ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x500ff4: 0xc14020e  jal         func_500838
    ctx->pc = 0x500FF4u;
    SET_GPR_U32(ctx, 31, 0x500FFCu);
    ctx->pc = 0x500FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500FF4u;
    // 0x500ff8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500838u, 0x500FF4u, 0x500FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x500FFCu;
label_500ffc:
    // 0x500ffc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x500ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x501000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x501000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501004: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x501004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501008: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x501008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50100c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x50100cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x501010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x501014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x501014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x501018: 0x813f8ea  j           func_4FE3A8
    ctx->pc = 0x501018u;
    ctx->pc = 0x50101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501018u;
    // 0x50101c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE3A8u;
    sub_004FE3A8_0x4fe3a8(rdram, ctx, runtime); return;
    ctx->pc = 0x501020u;
label_501020:
    // 0x501020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501024: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x501024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x501028: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x501028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x50102c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x50102cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x501030: 0x87a60000  lh          $a2, 0x0($sp)
    ctx->pc = 0x501030u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x501034: 0x87a70002  lh          $a3, 0x2($sp)
    ctx->pc = 0x501034u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x501038: 0x87a50004  lh          $a1, 0x4($sp)
    ctx->pc = 0x501038u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50103c: 0x87a20006  lh          $v0, 0x6($sp)
    ctx->pc = 0x50103cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x501040: 0x87a40008  lh          $a0, 0x8($sp)
    ctx->pc = 0x501040u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x501044: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x501044u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x501048: 0x87a3000a  lh          $v1, 0xA($sp)
    ctx->pc = 0x501048u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x50104c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x50104cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x501050: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x501050u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x501054: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x501054u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x501058: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x501058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x50105c: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x50105cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x501060: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x501060u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x501064: 0x3e00008  jr          $ra
    ctx->pc = 0x501064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x501068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501064u;
        // 0x501068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x501064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50106Cu;
    // 0x50106c: 0x0  nop
    ctx->pc = 0x50106cu;
    // NOP
    // 0x501070: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x501070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x501074: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x501074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x501078: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x501078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x50107c: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x50107cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x501080: 0x3e00008  jr          $ra
    ctx->pc = 0x501080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x501084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501080u;
        // 0x501084: 0x1012  mflo        $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x501080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x501088u;
    // 0x501088: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x501088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x50108c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x50108cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x501090: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x501090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x501094: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x501094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x501098: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x501098u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x50109c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x50109cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x5010a0: 0x3e00008  jr          $ra
    ctx->pc = 0x5010A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5010A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5010A0u;
        // 0x5010a4: 0x21103  sra         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5010A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5010A8u;
    // 0x5010a8: 0x248c0004  addiu       $t4, $a0, 0x4
    ctx->pc = 0x5010a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x5010ac: 0x24890008  addiu       $t1, $a0, 0x8
    ctx->pc = 0x5010acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x5010b0: 0x24aa0008  addiu       $t2, $a1, 0x8
    ctx->pc = 0x5010b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x5010b4: 0x24ab0004  addiu       $t3, $a1, 0x4
    ctx->pc = 0x5010b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x5010b8: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x5010b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x5010bc: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x5010bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x5010c0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x5010c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x5010c4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x5010c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x5010c8: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x5010c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x5010cc: 0x70471018  mult1       $v0, $v0, $a3
    ctx->pc = 0x5010ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x5010d0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x5010d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x5010d4: 0x24670fff  addiu       $a3, $v1, 0xFFF
    ctx->pc = 0x5010d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x5010d8: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x5010d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x5010dc: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x5010dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x5010e0: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x5010e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x5010e4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x5010e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x5010e8: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x5010e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5010ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x5010ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5010f0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x5010f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x5010f4: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x5010f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x5010f8: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x5010f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x5010fc: 0x70681818  mult1       $v1, $v1, $t0
    ctx->pc = 0x5010fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x501100: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x501100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x501104: 0x24470fff  addiu       $a3, $v0, 0xFFF
    ctx->pc = 0x501104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4095));
    // 0x501108: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x501108u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x50110c: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x50110cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x501110: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x501110u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x501114: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x501114u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x501118: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x501118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50111c: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x50111cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x501120: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x501120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x501124: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x501124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x501128: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x501128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x50112c: 0x70441018  mult1       $v0, $v0, $a0
    ctx->pc = 0x50112cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x501130: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x501130u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x501134: 0x24640fff  addiu       $a0, $v1, 0xFFF
    ctx->pc = 0x501134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x501138: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x501138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x50113c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x50113cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x501140: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x501140u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x501144: 0x3e00008  jr          $ra
    ctx->pc = 0x501144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x501148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501144u;
        // 0x501148: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x501144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50114Cu;
    // 0x50114c: 0x0  nop
    ctx->pc = 0x50114cu;
    // NOP
    // 0x501150: 0x248c0004  addiu       $t4, $a0, 0x4
    ctx->pc = 0x501150u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x501154: 0x24890008  addiu       $t1, $a0, 0x8
    ctx->pc = 0x501154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x501158: 0x24aa0008  addiu       $t2, $a1, 0x8
    ctx->pc = 0x501158u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x50115c: 0x24ab0004  addiu       $t3, $a1, 0x4
    ctx->pc = 0x50115cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x501160: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x501160u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x501164: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x501164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x501168: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x501168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x50116c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x50116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x501170: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x501170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x501174: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x501174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x501178: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x501178u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x50117c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x50117cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x501180: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x501180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x501184: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x501184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x501188: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x501188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50118c: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x50118cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x501190: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x501190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x501194: 0x70481018  mult1       $v0, $v0, $t0
    ctx->pc = 0x501194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x501198: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x501198u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x50119c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x50119cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x5011a0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x5011a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5011a4: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x5011a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x5011a8: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x5011a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x5011ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x5011acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5011b0: 0xe43818  mult        $a3, $a3, $a0
    ctx->pc = 0x5011b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x5011b4: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x5011b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x5011b8: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x5011b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x5011bc: 0x3e00008  jr          $ra
    ctx->pc = 0x5011BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5011C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5011BCu;
        // 0x5011c0: 0xacc70008  sw          $a3, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5011BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5011C4u;
    // 0x5011c4: 0x0  nop
    ctx->pc = 0x5011c4u;
    // NOP
    // 0x5011c8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5011c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5011cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5011ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5011d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5011d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5011d4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5011D4u;
    SET_GPR_U32(ctx, 31, 0x5011DCu);
    ctx->pc = 0x5011D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5011D4u;
    // 0x5011d8: 0x2484c718  addiu       $a0, $a0, -0x38E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5011D4u, 0x5011DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5011DCu;
label_5011dc:
    // 0x5011dc: 0x0  nop
    ctx->pc = 0x5011dcu;
    // NOP
label_5011e0:
    // 0x5011e0: 0x0  nop
    ctx->pc = 0x5011e0u;
    // NOP
    // 0x5011e4: 0x0  nop
    ctx->pc = 0x5011e4u;
    // NOP
    // 0x5011e8: 0x0  nop
    ctx->pc = 0x5011e8u;
    // NOP
    // 0x5011ec: 0x0  nop
    ctx->pc = 0x5011ecu;
    // NOP
    // 0x5011f0: 0x0  nop
    ctx->pc = 0x5011f0u;
    // NOP
    // 0x5011f4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5011F4u;
    {
        const bool branch_taken_0x5011f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5011f4) {
            ctx->pc = 0x5011E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5011e0;
        }
    }
    ctx->pc = 0x5011FCu;
    // 0x5011fc: 0x0  nop
    ctx->pc = 0x5011fcu;
    // NOP
    ctx->pc = 0x501200u;
}
