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

// Function: sub_00501200
// Address: 0x501200 - 0x501320
void sub_00501200_0x501200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00501200_0x501200");
#endif

    switch (ctx->pc) {
        case 0x50125cu: goto label_50125c;
        case 0x501274u: goto label_501274;
        case 0x50128cu: goto label_50128c;
        case 0x5012a4u: goto label_5012a4;
        case 0x5012fcu: goto label_5012fc;
        case 0x501300u: goto label_501300;
        default: break;
    }

    ctx->pc = 0x501200u;

    // 0x501200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x501200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x501204: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x501204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x501208: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x501208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50120c: 0x8fb10050  lw          $s1, 0x50($sp)
    ctx->pc = 0x50120cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x501210: 0x8fb20058  lw          $s2, 0x58($sp)
    ctx->pc = 0x501210u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x501214: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x501214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x501218: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x501218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50121c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x50121cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x501220: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x501220u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501224: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x501224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x501228: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x501228u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50122c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x50122cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x501230: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x501230u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501234: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x501234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501238: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x501238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50123c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x50123cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x501240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x501244: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x501244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x501248: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x501248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50124c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x50124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x501250: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x501250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x501254: 0xc14010c  jal         func_500430
    ctx->pc = 0x501254u;
    SET_GPR_U32(ctx, 31, 0x50125Cu);
    ctx->pc = 0x501258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501254u;
    // 0x501258: 0x160b82d  daddu       $s7, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500430u, 0x501254u, 0x50125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50125Cu;
label_50125c:
    // 0x50125c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50125cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501260: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x501260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501264: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x501264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501268: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x501268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50126c: 0xc14010c  jal         func_500430
    ctx->pc = 0x50126Cu;
    SET_GPR_U32(ctx, 31, 0x501274u);
    ctx->pc = 0x501270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50126Cu;
    // 0x501270: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500430u, 0x50126Cu, 0x501274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501274u;
label_501274:
    // 0x501274: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x501274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501278: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x501278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50127c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x50127cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501280: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x501280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501284: 0xc14010c  jal         func_500430
    ctx->pc = 0x501284u;
    SET_GPR_U32(ctx, 31, 0x50128Cu);
    ctx->pc = 0x501288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501284u;
    // 0x501288: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500430u, 0x501284u, 0x50128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50128Cu;
label_50128c:
    // 0x50128c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x50128cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501290: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x501290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501294: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x501294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501298: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x501298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50129c: 0xc14010c  jal         func_500430
    ctx->pc = 0x50129Cu;
    SET_GPR_U32(ctx, 31, 0x5012A4u);
    ctx->pc = 0x5012A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50129Cu;
    // 0x5012a0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500430u, 0x50129Cu, 0x5012A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5012A4u;
label_5012a4:
    // 0x5012a4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x5012a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x5012a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5012a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5012ac: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x5012acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x5012b0: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x5012b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x5012b4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x5012b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x5012b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5012b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5012bc: 0x101083  sra         $v0, $s0, 2
    ctx->pc = 0x5012bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 2));
    // 0x5012c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5012c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5012c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5012c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5012c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5012c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5012cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x5012ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5012d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x5012d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5012d4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x5012d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5012d8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x5012d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5012dc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x5012dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x5012e0: 0x3e00008  jr          $ra
    ctx->pc = 0x5012E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5012E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5012E0u;
        // 0x5012e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5012E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5012E8u;
    // 0x5012e8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5012e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5012ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5012ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5012f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5012f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5012f4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5012F4u;
    SET_GPR_U32(ctx, 31, 0x5012FCu);
    ctx->pc = 0x5012F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5012F4u;
    // 0x5012f8: 0x2484c728  addiu       $a0, $a0, -0x38D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5012F4u, 0x5012FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5012FCu;
label_5012fc:
    // 0x5012fc: 0x0  nop
    ctx->pc = 0x5012fcu;
    // NOP
label_501300:
    // 0x501300: 0x0  nop
    ctx->pc = 0x501300u;
    // NOP
    // 0x501304: 0x0  nop
    ctx->pc = 0x501304u;
    // NOP
    // 0x501308: 0x0  nop
    ctx->pc = 0x501308u;
    // NOP
    // 0x50130c: 0x0  nop
    ctx->pc = 0x50130cu;
    // NOP
    // 0x501310: 0x0  nop
    ctx->pc = 0x501310u;
    // NOP
    // 0x501314: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501314u;
    {
        const bool branch_taken_0x501314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501314) {
            ctx->pc = 0x501300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501300;
        }
    }
    ctx->pc = 0x50131Cu;
    // 0x50131c: 0x0  nop
    ctx->pc = 0x50131cu;
    // NOP
    ctx->pc = 0x501320u;
}
