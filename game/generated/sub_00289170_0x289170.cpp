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

// Function: sub_00289170
// Address: 0x289170 - 0x2897b8
void sub_00289170_0x289170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289170_0x289170");
#endif

    switch (ctx->pc) {
        case 0x2891bcu: goto label_2891bc;
        case 0x2895a0u: goto label_2895a0;
        case 0x2895b8u: goto label_2895b8;
        case 0x2895c8u: goto label_2895c8;
        case 0x289658u: goto label_289658;
        case 0x289670u: goto label_289670;
        case 0x2896d4u: goto label_2896d4;
        case 0x289764u: goto label_289764;
        case 0x289788u: goto label_289788;
        default: break;
    }

    ctx->pc = 0x289170u;

    // 0x289170: 0x8f82b38c  lw          $v0, -0x4C74($gp)
    ctx->pc = 0x289170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947724)));
    // 0x289174: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x289174u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
    // 0x289178: 0xffbe0480  sd          $fp, 0x480($sp)
    ctx->pc = 0x289178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 30));
    // 0x28917c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x28917cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289180: 0xffb00440  sd          $s0, 0x440($sp)
    ctx->pc = 0x289180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 16));
    // 0x289184: 0xffb10448  sd          $s1, 0x448($sp)
    ctx->pc = 0x289184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 17));
    // 0x289188: 0xffb20450  sd          $s2, 0x450($sp)
    ctx->pc = 0x289188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 18));
    // 0x28918c: 0xffb30458  sd          $s3, 0x458($sp)
    ctx->pc = 0x28918cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1112), GPR_U64(ctx, 19));
    // 0x289190: 0xffb40460  sd          $s4, 0x460($sp)
    ctx->pc = 0x289190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 20));
    // 0x289194: 0xffb50468  sd          $s5, 0x468($sp)
    ctx->pc = 0x289194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 21));
    // 0x289198: 0xffb60470  sd          $s6, 0x470($sp)
    ctx->pc = 0x289198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 22));
    // 0x28919c: 0xffb70478  sd          $s7, 0x478($sp)
    ctx->pc = 0x28919cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1144), GPR_U64(ctx, 23));
    // 0x2891a0: 0x14400167  bnez        $v0, . + 4 + (0x167 << 2)
    ctx->pc = 0x2891A0u;
    {
        const bool branch_taken_0x2891a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2891A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891A0u;
        // 0x2891a4: 0xffbf0488  sd          $ra, 0x488($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1160), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891a0) {
            ctx->pc = 0x289740u;
            goto label_289740;
        }
    }
    ctx->pc = 0x2891A8u;
    // 0x2891a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2891a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2891ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2891acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2891b0: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x2891b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2891b4: 0xc04a151  jal         func_128544
    ctx->pc = 0x2891B4u;
    SET_GPR_U32(ctx, 31, 0x2891BCu);
    ctx->pc = 0x2891B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2891B4u;
    // 0x2891b8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2891B4u, 0x2891BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2891BCu;
label_2891bc:
    // 0x2891bc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2891bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2891c0: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2891c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2891c4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2891c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2891c8: 0x2412001b  addiu       $s2, $zero, 0x1B
    ctx->pc = 0x2891c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2891cc: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x2891ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2891d0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2891d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2891d4: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x2891d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2891d8: 0x2419000e  addiu       $t9, $zero, 0xE
    ctx->pc = 0x2891d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2891dc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2891dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2891e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2891e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2891e4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2891e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2891e8: 0x24e79830  addiu       $a3, $a3, -0x67D0
    ctx->pc = 0x2891e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940720));
    // 0x2891ec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2891ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2891f0: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x2891f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2891f4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2891f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2891f8: 0x24140017  addiu       $s4, $zero, 0x17
    ctx->pc = 0x2891f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2891fc: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2891fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x289200: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x289200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x289204: 0x27a4033c  addiu       $a0, $sp, 0x33C
    ctx->pc = 0x289204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 828));
    // 0x289208: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x289208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x28920c: 0x24170009  addiu       $s7, $zero, 0x9
    ctx->pc = 0x28920cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x289210: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x289210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x289214: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x289214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x289218: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x289218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x28921c: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x28921cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x289220: 0xafb50028  sw          $s5, 0x28($sp)
    ctx->pc = 0x289220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 21));
    // 0x289224: 0x3c0d0048  lui         $t5, 0x48
    ctx->pc = 0x289224u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)72 << 16));
    // 0x289228: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x289228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x28922c: 0x3c0c0048  lui         $t4, 0x48
    ctx->pc = 0x28922cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)72 << 16));
    // 0x289230: 0xafb30034  sw          $s3, 0x34($sp)
    ctx->pc = 0x289230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 19));
    // 0x289234: 0x3c0e0048  lui         $t6, 0x48
    ctx->pc = 0x289234u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)72 << 16));
    // 0x289238: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x289238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x28923c: 0x258c9858  addiu       $t4, $t4, -0x67A8
    ctx->pc = 0x28923cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294940760));
    // 0x289240: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x289240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x289244: 0x24180012  addiu       $t8, $zero, 0x12
    ctx->pc = 0x289244u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x289248: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x289248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x28924c: 0x25ad9840  addiu       $t5, $t5, -0x67C0
    ctx->pc = 0x28924cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294940736));
    // 0x289250: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x289250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x289254: 0x25ce9870  addiu       $t6, $t6, -0x6790
    ctx->pc = 0x289254u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294940784));
    // 0x289258: 0xafb00048  sw          $s0, 0x48($sp)
    ctx->pc = 0x289258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
    // 0x28925c: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x28925cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x289260: 0xafb0004c  sw          $s0, 0x4C($sp)
    ctx->pc = 0x289260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
    // 0x289264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289268: 0xafb20050  sw          $s2, 0x50($sp)
    ctx->pc = 0x289268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 18));
    // 0x28926c: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x28926cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x289270: 0xafb10054  sw          $s1, 0x54($sp)
    ctx->pc = 0x289270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 17));
    // 0x289274: 0x26d633c0  addiu       $s6, $s6, 0x33C0
    ctx->pc = 0x289274u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 13248));
    // 0x289278: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x289278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x28927c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x28927cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x289280: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x289280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x289284: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x289284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x289288: 0xafb50068  sw          $s5, 0x68($sp)
    ctx->pc = 0x289288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 21));
    // 0x28928c: 0xafb3006c  sw          $s3, 0x6C($sp)
    ctx->pc = 0x28928cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
    // 0x289290: 0xafb30070  sw          $s3, 0x70($sp)
    ctx->pc = 0x289290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 19));
    // 0x289294: 0xafab0074  sw          $t3, 0x74($sp)
    ctx->pc = 0x289294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 11));
    // 0x289298: 0xafb20078  sw          $s2, 0x78($sp)
    ctx->pc = 0x289298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 18));
    // 0x28929c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x28929cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x2892a0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2892a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2892a4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2892a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2892a8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2892a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2892ac: 0xafb0008c  sw          $s0, 0x8C($sp)
    ctx->pc = 0x2892acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 16));
    // 0x2892b0: 0xafab0094  sw          $t3, 0x94($sp)
    ctx->pc = 0x2892b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 11));
    // 0x2892b4: 0xafb90098  sw          $t9, 0x98($sp)
    ctx->pc = 0x2892b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 25));
    // 0x2892b8: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x2892b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x2892bc: 0xafa70114  sw          $a3, 0x114($sp)
    ctx->pc = 0x2892bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 7));
    // 0x2892c0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2892c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2892c4: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x2892c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x2892c8: 0x3403e400  ori         $v1, $zero, 0xE400
    ctx->pc = 0x2892c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58368);
    // 0x2892cc: 0xafa800e0  sw          $t0, 0xE0($sp)
    ctx->pc = 0x2892ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 8));
    // 0x2892d0: 0xafa70124  sw          $a3, 0x124($sp)
    ctx->pc = 0x2892d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 7));
    // 0x2892d4: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x2892d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2892d8: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x2892d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x2892dc: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x2892dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x2892e0: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x2892e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x2892e4: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2892e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2892e8: 0xafb000b4  sw          $s0, 0xB4($sp)
    ctx->pc = 0x2892e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 16));
    // 0x2892ec: 0xafb200bc  sw          $s2, 0xBC($sp)
    ctx->pc = 0x2892ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 18));
    // 0x2892f0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2892f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2892f4: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x2892f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x2892f8: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x2892f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x2892fc: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x2892fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x289300: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x289300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x289304: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x289304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x289308: 0xafa900d8  sw          $t1, 0xD8($sp)
    ctx->pc = 0x289308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 9));
    // 0x28930c: 0xafb100dc  sw          $s1, 0xDC($sp)
    ctx->pc = 0x28930cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 17));
    // 0x289310: 0xafaa00e4  sw          $t2, 0xE4($sp)
    ctx->pc = 0x289310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 10));
    // 0x289314: 0xafb400e8  sw          $s4, 0xE8($sp)
    ctx->pc = 0x289314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 20));
    // 0x289318: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x289318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x28931c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x28931cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x289320: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x289320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x289324: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x289324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x289328: 0xafb700fc  sw          $s7, 0xFC($sp)
    ctx->pc = 0x289328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 23));
    // 0x28932c: 0xafb10100  sw          $s1, 0x100($sp)
    ctx->pc = 0x28932cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 17));
    // 0x289330: 0xafb70104  sw          $s7, 0x104($sp)
    ctx->pc = 0x289330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 23));
    // 0x289334: 0xafa90108  sw          $t1, 0x108($sp)
    ctx->pc = 0x289334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 9));
    // 0x289338: 0xafb4010c  sw          $s4, 0x10C($sp)
    ctx->pc = 0x289338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 20));
    // 0x28933c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x28933cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x289340: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x289340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x289344: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x289344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x289348: 0xafb00120  sw          $s0, 0x120($sp)
    ctx->pc = 0x289348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 16));
    // 0x28934c: 0xafb20128  sw          $s2, 0x128($sp)
    ctx->pc = 0x28934cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 18));
    // 0x289350: 0xafa80148  sw          $t0, 0x148($sp)
    ctx->pc = 0x289350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 8));
    // 0x289354: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x289354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x289358: 0xafa8014c  sw          $t0, 0x14C($sp)
    ctx->pc = 0x289358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 8));
    // 0x28935c: 0x24080011  addiu       $t0, $zero, 0x11
    ctx->pc = 0x28935cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x289360: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x289360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
    // 0x289364: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x289364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x289368: 0xafa70174  sw          $a3, 0x174($sp)
    ctx->pc = 0x289368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 7));
    // 0x28936c: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x28936cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x289370: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x289370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x289374: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x289374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x289378: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x289378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x28937c: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x28937cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x289380: 0xafb00140  sw          $s0, 0x140($sp)
    ctx->pc = 0x289380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 16));
    // 0x289384: 0xafb30144  sw          $s3, 0x144($sp)
    ctx->pc = 0x289384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 19));
    // 0x289388: 0xafb20150  sw          $s2, 0x150($sp)
    ctx->pc = 0x289388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 18));
    // 0x28938c: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x28938cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x289390: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x289390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x289394: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x289394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x289398: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x289398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x28939c: 0xafb00164  sw          $s0, 0x164($sp)
    ctx->pc = 0x28939cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 16));
    // 0x2893a0: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x2893a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
    // 0x2893a4: 0xafb1016c  sw          $s1, 0x16C($sp)
    ctx->pc = 0x2893a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 17));
    // 0x2893a8: 0xafaf0170  sw          $t7, 0x170($sp)
    ctx->pc = 0x2893a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 15));
    // 0x2893ac: 0xafb40178  sw          $s4, 0x178($sp)
    ctx->pc = 0x2893acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 20));
    // 0x2893b0: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x2893b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x2893b4: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x2893b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x2893b8: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x2893b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x2893bc: 0xafa90190  sw          $t1, 0x190($sp)
    ctx->pc = 0x2893bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 9));
    // 0x2893c0: 0xafb0018c  sw          $s0, 0x18C($sp)
    ctx->pc = 0x2893c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 16));
    // 0x2893c4: 0xafb20194  sw          $s2, 0x194($sp)
    ctx->pc = 0x2893c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 18));
    // 0x2893c8: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x2893c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x2893cc: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x2893ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
    // 0x2893d0: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x2893d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x2893d4: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x2893d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x2893d8: 0xafa001a8  sw          $zero, 0x1A8($sp)
    ctx->pc = 0x2893d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
    // 0x2893dc: 0xafb001ac  sw          $s0, 0x1AC($sp)
    ctx->pc = 0x2893dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 16));
    // 0x2893e0: 0xafb901b8  sw          $t9, 0x1B8($sp)
    ctx->pc = 0x2893e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 25));
    // 0x2893e4: 0xafa801dc  sw          $t0, 0x1DC($sp)
    ctx->pc = 0x2893e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 8));
    // 0x2893e8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2893e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2893ec: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x2893ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
    // 0x2893f0: 0xafb301b0  sw          $s3, 0x1B0($sp)
    ctx->pc = 0x2893f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 19));
    // 0x2893f4: 0xafb701b4  sw          $s7, 0x1B4($sp)
    ctx->pc = 0x2893f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 23));
    // 0x2893f8: 0xafb201bc  sw          $s2, 0x1BC($sp)
    ctx->pc = 0x2893f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 18));
    // 0x2893fc: 0xafa001c0  sw          $zero, 0x1C0($sp)
    ctx->pc = 0x2893fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
    // 0x289400: 0xafa001c4  sw          $zero, 0x1C4($sp)
    ctx->pc = 0x289400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 0));
    // 0x289404: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x289404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
    // 0x289408: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x289408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
    // 0x28940c: 0xafb001d0  sw          $s0, 0x1D0($sp)
    ctx->pc = 0x28940cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 16));
    // 0x289410: 0xafaa01d8  sw          $t2, 0x1D8($sp)
    ctx->pc = 0x289410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 10));
    // 0x289414: 0xafb401e0  sw          $s4, 0x1E0($sp)
    ctx->pc = 0x289414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 20));
    // 0x289418: 0xafa001e4  sw          $zero, 0x1E4($sp)
    ctx->pc = 0x289418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
    // 0x28941c: 0xafa001e8  sw          $zero, 0x1E8($sp)
    ctx->pc = 0x28941cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 0));
    // 0x289420: 0xafa001ec  sw          $zero, 0x1EC($sp)
    ctx->pc = 0x289420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
    // 0x289424: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x289424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x289428: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x289428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x28942c: 0xafaa01fc  sw          $t2, 0x1FC($sp)
    ctx->pc = 0x28942cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 10));
    // 0x289430: 0xafb501f8  sw          $s5, 0x1F8($sp)
    ctx->pc = 0x289430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 21));
    // 0x289434: 0xafa30200  sw          $v1, 0x200($sp)
    ctx->pc = 0x289434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
    // 0x289438: 0x8fc30060  lw          $v1, 0x60($fp)
    ctx->pc = 0x289438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x28943c: 0x8fc7005c  lw          $a3, 0x5C($fp)
    ctx->pc = 0x28943cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x289440: 0xafa80224  sw          $t0, 0x224($sp)
    ctx->pc = 0x289440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 8));
    // 0x289444: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x289444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x289448: 0xafa8021c  sw          $t0, 0x21C($sp)
    ctx->pc = 0x289448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 8));
    // 0x28944c: 0x24080013  addiu       $t0, $zero, 0x13
    ctx->pc = 0x28944cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x289450: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x289450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x289454: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x289454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x289458: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x289458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
    // 0x28945c: 0xafa00208  sw          $zero, 0x208($sp)
    ctx->pc = 0x28945cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 0));
    // 0x289460: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x289460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x289464: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x289464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
    // 0x289468: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x289468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
    // 0x28946c: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x28946cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    // 0x289470: 0xafb10220  sw          $s1, 0x220($sp)
    ctx->pc = 0x289470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 17));
    // 0x289474: 0xafa00230  sw          $zero, 0x230($sp)
    ctx->pc = 0x289474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
    // 0x289478: 0xafa30254  sw          $v1, 0x254($sp)
    ctx->pc = 0x289478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 3));
    // 0x28947c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x28947cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x289480: 0xafa7025c  sw          $a3, 0x25C($sp)
    ctx->pc = 0x289480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 7));
    // 0x289484: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x289484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x289488: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x289488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
    // 0x28948c: 0xafa302b4  sw          $v1, 0x2B4($sp)
    ctx->pc = 0x28948cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 3));
    // 0x289490: 0x240303c4  addiu       $v1, $zero, 0x3C4
    ctx->pc = 0x289490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x289494: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x289494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x289498: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x289498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    // 0x28949c: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x28949cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x2894a0: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x2894a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
    // 0x2894a4: 0xafa70288  sw          $a3, 0x288($sp)
    ctx->pc = 0x2894a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 7));
    // 0x2894a8: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x2894a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2894ac: 0xafa80290  sw          $t0, 0x290($sp)
    ctx->pc = 0x2894acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 8));
    // 0x2894b0: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x2894b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2894b4: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x2894b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
    // 0x2894b8: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x2894b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
    // 0x2894bc: 0xafa202bc  sw          $v0, 0x2BC($sp)
    ctx->pc = 0x2894bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 2));
    // 0x2894c0: 0xafa302c0  sw          $v1, 0x2C0($sp)
    ctx->pc = 0x2894c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 3));
    // 0x2894c4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2894c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2894c8: 0xafa00234  sw          $zero, 0x234($sp)
    ctx->pc = 0x2894c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
    // 0x2894cc: 0xafa00238  sw          $zero, 0x238($sp)
    ctx->pc = 0x2894ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
    // 0x2894d0: 0xafa0023c  sw          $zero, 0x23C($sp)
    ctx->pc = 0x2894d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 0));
    // 0x2894d4: 0xafad0258  sw          $t5, 0x258($sp)
    ctx->pc = 0x2894d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 13));
    // 0x2894d8: 0xafaf0240  sw          $t7, 0x240($sp)
    ctx->pc = 0x2894d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 15));
    // 0x2894dc: 0xafb10244  sw          $s1, 0x244($sp)
    ctx->pc = 0x2894dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 17));
    // 0x2894e0: 0xafb80248  sw          $t8, 0x248($sp)
    ctx->pc = 0x2894e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 24));
    // 0x2894e4: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x2894e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
    // 0x2894e8: 0xafb8026c  sw          $t8, 0x26C($sp)
    ctx->pc = 0x2894e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 24));
    // 0x2894ec: 0xafb10268  sw          $s1, 0x268($sp)
    ctx->pc = 0x2894ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 17));
    // 0x2894f0: 0xafa00278  sw          $zero, 0x278($sp)
    ctx->pc = 0x2894f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 0));
    // 0x2894f4: 0xafac027c  sw          $t4, 0x27C($sp)
    ctx->pc = 0x2894f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 12));
    // 0x2894f8: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x2894f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
    // 0x2894fc: 0xafa00284  sw          $zero, 0x284($sp)
    ctx->pc = 0x2894fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 0));
    // 0x289500: 0xafae02a0  sw          $t6, 0x2A0($sp)
    ctx->pc = 0x289500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 14));
    // 0x289504: 0xafb1028c  sw          $s1, 0x28C($sp)
    ctx->pc = 0x289504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 17));
    // 0x289508: 0xafa0029c  sw          $zero, 0x29C($sp)
    ctx->pc = 0x289508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 0));
    // 0x28950c: 0xafa002a4  sw          $zero, 0x2A4($sp)
    ctx->pc = 0x28950cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 0));
    // 0x289510: 0xafa002a8  sw          $zero, 0x2A8($sp)
    ctx->pc = 0x289510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 0));
    // 0x289514: 0xafac02c4  sw          $t4, 0x2C4($sp)
    ctx->pc = 0x289514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 12));
    // 0x289518: 0xafa202b8  sw          $v0, 0x2B8($sp)
    ctx->pc = 0x289518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 2));
    // 0x28951c: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x28951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x289520: 0xafa702d8  sw          $a3, 0x2D8($sp)
    ctx->pc = 0x289520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 7));
    // 0x289524: 0xafa702d0  sw          $a3, 0x2D0($sp)
    ctx->pc = 0x289524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 7));
    // 0x289528: 0xafa802f8  sw          $t0, 0x2F8($sp)
    ctx->pc = 0x289528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 8));
    // 0x28952c: 0xafa30320  sw          $v1, 0x320($sp)
    ctx->pc = 0x28952cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 3));
    // 0x289530: 0xafb602c8  sw          $s6, 0x2C8($sp)
    ctx->pc = 0x289530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 22));
    // 0x289534: 0xafaf02ac  sw          $t7, 0x2AC($sp)
    ctx->pc = 0x289534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 15));
    // 0x289538: 0xafb102b0  sw          $s1, 0x2B0($sp)
    ctx->pc = 0x289538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 17));
    // 0x28953c: 0xafa002cc  sw          $zero, 0x2CC($sp)
    ctx->pc = 0x28953cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 0));
    // 0x289540: 0xafb102d4  sw          $s1, 0x2D4($sp)
    ctx->pc = 0x289540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 17));
    // 0x289544: 0xafa002dc  sw          $zero, 0x2DC($sp)
    ctx->pc = 0x289544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 0));
    // 0x289548: 0xafa002e0  sw          $zero, 0x2E0($sp)
    ctx->pc = 0x289548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 0));
    // 0x28954c: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x28954cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
    // 0x289550: 0xafa002e8  sw          $zero, 0x2E8($sp)
    ctx->pc = 0x289550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 0));
    // 0x289554: 0xafa002ec  sw          $zero, 0x2EC($sp)
    ctx->pc = 0x289554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 0));
    // 0x289558: 0xafa002f0  sw          $zero, 0x2F0($sp)
    ctx->pc = 0x289558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 0));
    // 0x28955c: 0xafb002f4  sw          $s0, 0x2F4($sp)
    ctx->pc = 0x28955cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 16));
    // 0x289560: 0xafb202fc  sw          $s2, 0x2FC($sp)
    ctx->pc = 0x289560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 18));
    // 0x289564: 0xafa00300  sw          $zero, 0x300($sp)
    ctx->pc = 0x289564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 0));
    // 0x289568: 0xafa00304  sw          $zero, 0x304($sp)
    ctx->pc = 0x289568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 0));
    // 0x28956c: 0xafa00308  sw          $zero, 0x308($sp)
    ctx->pc = 0x28956cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 0));
    // 0x289570: 0xafa0030c  sw          $zero, 0x30C($sp)
    ctx->pc = 0x289570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 0));
    // 0x289574: 0xafa00310  sw          $zero, 0x310($sp)
    ctx->pc = 0x289574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 0));
    // 0x289578: 0xafa00314  sw          $zero, 0x314($sp)
    ctx->pc = 0x289578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 0));
    // 0x28957c: 0xafaf031c  sw          $t7, 0x31C($sp)
    ctx->pc = 0x28957cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 15));
    // 0x289580: 0xafa20324  sw          $v0, 0x324($sp)
    ctx->pc = 0x289580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 2));
    // 0x289584: 0xafb00318  sw          $s0, 0x318($sp)
    ctx->pc = 0x289584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 792), GPR_U32(ctx, 16));
    // 0x289588: 0xafa00328  sw          $zero, 0x328($sp)
    ctx->pc = 0x289588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 0));
    // 0x28958c: 0xafa0032c  sw          $zero, 0x32C($sp)
    ctx->pc = 0x28958cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 0));
    // 0x289590: 0xafa00330  sw          $zero, 0x330($sp)
    ctx->pc = 0x289590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 0));
    // 0x289594: 0xafa00334  sw          $zero, 0x334($sp)
    ctx->pc = 0x289594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 0));
    // 0x289598: 0xc04a151  jal         func_128544
    ctx->pc = 0x289598u;
    SET_GPR_U32(ctx, 31, 0x2895A0u);
    ctx->pc = 0x28959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289598u;
    // 0x28959c: 0xafa00338  sw          $zero, 0x338($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x289598u, 0x2895A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895A0u;
label_2895a0:
    // 0x2895a0: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x2895a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x2895a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2895a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895a8: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x2895a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2895ac: 0xafb00344  sw          $s0, 0x344($sp)
    ctx->pc = 0x2895acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 16));
    // 0x2895b0: 0xc04a151  jal         func_128544
    ctx->pc = 0x2895B0u;
    SET_GPR_U32(ctx, 31, 0x2895B8u);
    ctx->pc = 0x2895B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2895B0u;
    // 0x2895b4: 0xafb5033c  sw          $s5, 0x33C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2895B0u, 0x2895B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895B8u;
label_2895b8:
    // 0x2895b8: 0x27a40384  addiu       $a0, $sp, 0x384
    ctx->pc = 0x2895b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 900));
    // 0x2895bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2895bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895c0: 0xc04a151  jal         func_128544
    ctx->pc = 0x2895C0u;
    SET_GPR_U32(ctx, 31, 0x2895C8u);
    ctx->pc = 0x2895C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2895C0u;
    // 0x2895c4: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2895C0u, 0x2895C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895C8u;
label_2895c8:
    // 0x2895c8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2895c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2895cc: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2895ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2895d0: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2895d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2895d4: 0x27a40414  addiu       $a0, $sp, 0x414
    ctx->pc = 0x2895d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1044));
    // 0x2895d8: 0xafa703a8  sw          $a3, 0x3A8($sp)
    ctx->pc = 0x2895d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 936), GPR_U32(ctx, 7));
    // 0x2895dc: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x2895dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2895e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2895e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895e4: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2895e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2895e8: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x2895e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2895ec: 0xafa303d8  sw          $v1, 0x3D8($sp)
    ctx->pc = 0x2895ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 984), GPR_U32(ctx, 3));
    // 0x2895f0: 0xafb103ac  sw          $s1, 0x3AC($sp)
    ctx->pc = 0x2895f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 940), GPR_U32(ctx, 17));
    // 0x2895f4: 0xafa803b0  sw          $t0, 0x3B0($sp)
    ctx->pc = 0x2895f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 8));
    // 0x2895f8: 0xafb703b4  sw          $s7, 0x3B4($sp)
    ctx->pc = 0x2895f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 948), GPR_U32(ctx, 23));
    // 0x2895fc: 0xafb403b8  sw          $s4, 0x3B8($sp)
    ctx->pc = 0x2895fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 952), GPR_U32(ctx, 20));
    // 0x289600: 0xafa003bc  sw          $zero, 0x3BC($sp)
    ctx->pc = 0x289600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 956), GPR_U32(ctx, 0));
    // 0x289604: 0xafa003c0  sw          $zero, 0x3C0($sp)
    ctx->pc = 0x289604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 0));
    // 0x289608: 0xafa003c4  sw          $zero, 0x3C4($sp)
    ctx->pc = 0x289608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 964), GPR_U32(ctx, 0));
    // 0x28960c: 0xafa003c8  sw          $zero, 0x3C8($sp)
    ctx->pc = 0x28960cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 968), GPR_U32(ctx, 0));
    // 0x289610: 0xafa703d0  sw          $a3, 0x3D0($sp)
    ctx->pc = 0x289610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 7));
    // 0x289614: 0xafa203d4  sw          $v0, 0x3D4($sp)
    ctx->pc = 0x289614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 980), GPR_U32(ctx, 2));
    // 0x289618: 0xafb303cc  sw          $s3, 0x3CC($sp)
    ctx->pc = 0x289618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 972), GPR_U32(ctx, 19));
    // 0x28961c: 0xafa003dc  sw          $zero, 0x3DC($sp)
    ctx->pc = 0x28961cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 988), GPR_U32(ctx, 0));
    // 0x289620: 0xafa003e0  sw          $zero, 0x3E0($sp)
    ctx->pc = 0x289620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 0));
    // 0x289624: 0xafa003e4  sw          $zero, 0x3E4($sp)
    ctx->pc = 0x289624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 996), GPR_U32(ctx, 0));
    // 0x289628: 0xafa003e8  sw          $zero, 0x3E8($sp)
    ctx->pc = 0x289628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1000), GPR_U32(ctx, 0));
    // 0x28962c: 0xafa003ec  sw          $zero, 0x3EC($sp)
    ctx->pc = 0x28962cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1004), GPR_U32(ctx, 0));
    // 0x289630: 0xafb303f0  sw          $s3, 0x3F0($sp)
    ctx->pc = 0x289630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 19));
    // 0x289634: 0xafb403f4  sw          $s4, 0x3F4($sp)
    ctx->pc = 0x289634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1012), GPR_U32(ctx, 20));
    // 0x289638: 0xafb503f8  sw          $s5, 0x3F8($sp)
    ctx->pc = 0x289638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1016), GPR_U32(ctx, 21));
    // 0x28963c: 0xafb203fc  sw          $s2, 0x3FC($sp)
    ctx->pc = 0x28963cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1020), GPR_U32(ctx, 18));
    // 0x289640: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x289640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
    // 0x289644: 0xafa00404  sw          $zero, 0x404($sp)
    ctx->pc = 0x289644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 0));
    // 0x289648: 0xafa00408  sw          $zero, 0x408($sp)
    ctx->pc = 0x289648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 0));
    // 0x28964c: 0xafa0040c  sw          $zero, 0x40C($sp)
    ctx->pc = 0x28964cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 0));
    // 0x289650: 0xc04a151  jal         func_128544
    ctx->pc = 0x289650u;
    SET_GPR_U32(ctx, 31, 0x289658u);
    ctx->pc = 0x289654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289650u;
    // 0x289654: 0xafa00410  sw          $zero, 0x410($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x289650u, 0x289658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289658u;
label_289658:
    // 0x289658: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x289658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x28965c: 0x248465b8  addiu       $a0, $a0, 0x65B8
    ctx->pc = 0x28965cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26040));
    // 0x289660: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x289660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x289664: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x289664u;
    {
        const bool branch_taken_0x289664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289664u;
        // 0x289668: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289664) {
            ctx->pc = 0x2896D0u;
            goto label_2896d0;
        }
    }
    ctx->pc = 0x28966Cu;
    // 0x28966c: 0x27a20420  addiu       $v0, $sp, 0x420
    ctx->pc = 0x28966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_289670:
    // 0x289670: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x289670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x289674: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x289674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x289678: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x289678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x28967c: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x28967cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x289680: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x289680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x289684: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x289684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x289688: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x289688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x28968c: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x28968cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x289690: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x289690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289694: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x289694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289698: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x289698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28969c: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x28969cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2896a0: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x2896a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2896a4: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x2896a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2896a8: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x2896a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2896ac: 0xb4870018  sdr         $a3, 0x18($a0)
    ctx->pc = 0x2896acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2896b0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2896b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2896b4: 0x0  nop
    ctx->pc = 0x2896b4u;
    // NOP
    // 0x2896b8: 0x0  nop
    ctx->pc = 0x2896b8u;
    // NOP
    // 0x2896bc: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2896BCu;
    {
        const bool branch_taken_0x2896bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2896C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896BCu;
        // 0x2896c0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2896bc) {
            ctx->pc = 0x289670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289670;
        }
    }
    ctx->pc = 0x2896C4u;
    // 0x2896c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2896C4u;
    {
        const bool branch_taken_0x2896c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2896c4) {
            ctx->pc = 0x289708u;
            goto label_289708;
        }
    }
    ctx->pc = 0x2896CCu;
    // 0x2896cc: 0x0  nop
    ctx->pc = 0x2896ccu;
    // NOP
label_2896d0:
    // 0x2896d0: 0x27a20420  addiu       $v0, $sp, 0x420
    ctx->pc = 0x2896d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_2896d4:
    // 0x2896d4: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x2896d4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2896d8: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x2896d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2896dc: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x2896dcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2896e0: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x2896e0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2896e4: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x2896e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x2896e8: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x2896e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x2896ec: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x2896ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x2896f0: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x2896f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x2896f4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2896f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2896f8: 0x0  nop
    ctx->pc = 0x2896f8u;
    // NOP
    // 0x2896fc: 0x0  nop
    ctx->pc = 0x2896fcu;
    // NOP
    // 0x289700: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x289700u;
    {
        const bool branch_taken_0x289700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x289704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289700u;
        // 0x289704: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289700) {
            ctx->pc = 0x2896D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2896d4;
        }
    }
    ctx->pc = 0x289708u;
label_289708:
    // 0x289708: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x289708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x28970c: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x28970cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x289710: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x289710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x289714: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x289714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x289718: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x289718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x28971c: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x28971cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x289720: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x289720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289724: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x289724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289728: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x289728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28972c: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x28972cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289730: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x289730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289738: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x289738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28973c: 0xaf82b38c  sw          $v0, -0x4C74($gp)
    ctx->pc = 0x28973cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947724), GPR_U32(ctx, 2));
label_289740:
    // 0x289740: 0x8fc20050  lw          $v0, 0x50($fp)
    ctx->pc = 0x289740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x289744: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x289744u;
    {
        const bool branch_taken_0x289744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289744u;
        // 0x289748: 0xdfb00440  ld          $s0, 0x440($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289744) {
            ctx->pc = 0x28978Cu;
            goto label_28978c;
        }
    }
    ctx->pc = 0x28974Cu;
    // 0x28974c: 0x8fc2005c  lw          $v0, 0x5C($fp)
    ctx->pc = 0x28974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x289750: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x289750u;
    {
        const bool branch_taken_0x289750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289750u;
        // 0x289754: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289750) {
            ctx->pc = 0x28978Cu;
            goto label_28978c;
        }
    }
    ctx->pc = 0x289758u;
    // 0x289758: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x289758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28975c: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x28975Cu;
    SET_GPR_U32(ctx, 31, 0x289764u);
    ctx->pc = 0x289760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28975Cu;
    // 0x289760: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2875E8u, 0x28975Cu, 0x289764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289764u;
label_289764:
    // 0x289764: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x289764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x289768: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x289768u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28976c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28976cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x289770: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x289770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x289774: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x289774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x289778: 0x242165b8  addiu       $at, $at, 0x65B8
    ctx->pc = 0x289778u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 26040));
    // 0x28977c: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x28977cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x289780: 0xc0a1c7a  jal         func_2871E8
    ctx->pc = 0x289780u;
    SET_GPR_U32(ctx, 31, 0x289788u);
    ctx->pc = 0x289784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289780u;
    // 0x289784: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2871E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2871E8u, 0x289780u, 0x289788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289788u;
label_289788:
    // 0x289788: 0xdfb00440  ld          $s0, 0x440($sp)
    ctx->pc = 0x289788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_28978c:
    // 0x28978c: 0xdfb10448  ld          $s1, 0x448($sp)
    ctx->pc = 0x28978cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1096)));
    // 0x289790: 0xdfb20450  ld          $s2, 0x450($sp)
    ctx->pc = 0x289790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x289794: 0xdfb30458  ld          $s3, 0x458($sp)
    ctx->pc = 0x289794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x289798: 0xdfb40460  ld          $s4, 0x460($sp)
    ctx->pc = 0x289798u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x28979c: 0xdfb50468  ld          $s5, 0x468($sp)
    ctx->pc = 0x28979cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x2897a0: 0xdfb60470  ld          $s6, 0x470($sp)
    ctx->pc = 0x2897a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2897a4: 0xdfb70478  ld          $s7, 0x478($sp)
    ctx->pc = 0x2897a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1144)));
    // 0x2897a8: 0xdfbe0480  ld          $fp, 0x480($sp)
    ctx->pc = 0x2897a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x2897ac: 0xdfbf0488  ld          $ra, 0x488($sp)
    ctx->pc = 0x2897acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1160)));
    // 0x2897b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2897B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2897B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897B0u;
        // 0x2897b4: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2897B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2897B8u;
}
